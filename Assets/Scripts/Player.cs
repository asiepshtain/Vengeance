using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {

	// Use this for initialization
	private Rigidbody2D rigid;
    private Vector2 velcoity;

    public float speed = 1;
    public float shotSpeed;

    public GameObject ProjectileBlue;
    public GameObject ProjectileGreen;

    // Use this for initialization
    private List<Vector3> Playback = new List<Vector3>();

    private bool alive = true;

    public bool Flip;
    private float recordStep = 0.016f;

    public bool interactive { get; set; }

    public event HitReport HitDetected;
    public delegate void HitReport(Player p);

    public event ShotReport ShotDetected;
    public delegate void ShotReport(GameObject p);

    void Start()
    {
        rigid = GetComponent<Rigidbody2D>();
        velcoity = new Vector2();
        //interactive = true;
        //startRecording();
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space) && interactive)
            fireProjectile();
    }



    public void startRecording(bool skip = false)
    {
        StartCoroutine("Record",skip);
    }

    public List<Vector3> stopRecording()
    {
        StopCoroutine("Record");
        //startPlayback(Playback, true);
        return Playback;
    }


    public IEnumerator Record(bool skip = false)
    {

        if (skip)
            recordStep = 0.016f;
        else
            recordStep = 1;

        while ( true )
        {
            yield return new WaitForSeconds(recordStep);
            recordStep = 0.016f;
            interactive = true;
            Playback.Add(new Vector3(transform.position.x, transform.position.y, Input.GetKeyUp(KeyCode.Space) ? 1 : 0));

            if (Playback.Count > 60 * 60) // sixty frames per second times the amount of seconds - thirty 
                Playback.RemoveAt(0);
        }
    }

    public void startPlayback(List<Vector3> value, bool flip)
    {
        Playback = value;
        Flip = flip;
        StartCoroutine("PlayRecording");
    }

    public IEnumerator PlayRecording()
    {

        recordStep = 1;

        if ( Flip )
        {
            this.transform.Rotate(0, 0, 180);
            
        }
        else
        {
           
        }


        bool PlayFwd = true;
        int playbackIndex = 0;

        
        while (true)
        {
            transform.position = new Vector2(Playback[playbackIndex].x, Playback[playbackIndex].y * (Flip ? -1 : 1));
            if (Playback[playbackIndex].z == 1)
            {
                fireProjectile();
            }


            if (PlayFwd)
            {
                playbackIndex++;
                if (playbackIndex == Playback.Count - 1)
                    PlayFwd = false;
            }
            else
            {
                playbackIndex--;
                if (playbackIndex == 0)
                    PlayFwd = true;
            }

            yield return new WaitForSeconds(recordStep);
            recordStep = 0.016f;
        }


    }

    public void fireProjectile()
    {
        if (!alive)
            return;

        Debug.Log("FIRE");

        Transform bullet;

        if (this.gameObject.layer ==  9 ) 
            bullet = Instantiate<GameObject>(ProjectileGreen, transform).GetComponent<Transform>();
        else
            bullet = Instantiate<GameObject>(ProjectileBlue, transform).GetComponent<Transform>();


        bullet.position = new Vector2(bullet.position.x, bullet.position.y + ( Flip ? -1 : 1));
        bullet.GetComponent<Rigidbody2D>().AddForce(Vector2.up * 1000 * shotSpeed  * (Flip ? -1 : 1 ) );
        bullet.parent = transform.parent;
        bullet.gameObject.layer = this.gameObject.layer;

        if (ShotDetected != null)
            ShotDetected(bullet.gameObject);
    }

    public void killAnim()
    {
        alive = false;

        ParticleSystem p = GetComponentInChildren<ParticleSystem>();
        p.Play();
        GetComponent<SpriteRenderer>().enabled = false;

        Destroy(GetComponent<Collider2D>());
        Invoke("EndIt", 1);
    }
    private void EndIt()
    {
        Destroy(this.gameObject);
    }
    
     
    void OnTriggerEnter2D(Collider2D other)
    {
        Debug.Log("COLLIDE");
        Destroy(other.gameObject);

        if (HitDetected != null )
            HitDetected(this);
    }

    // Update is called once per frame

    void FixedUpdate()
    {
        if (interactive)
        {
            
            velcoity = Vector2.zero;

            float h = Input.GetAxis("Horizontal");
            float v = Input.GetAxis("Vertical");
            //Debug.Log(Input.GetAxis("Horizontal"));
            //Debug.Log(Input.GetAxis("Vertical"));



            if (h == 0)
                velcoity.x = 0;
            else if (h > 0)
                velcoity.x = speed;
            else if (h  < 0)
                velcoity.x = speed * -1;

            if (v == 0)
                velcoity.y = 0;
            else if (v > 0)
                velcoity.y = speed;
            else if (v < 0)
                velcoity.y = speed * -1;

            rigid.velocity = velcoity;


            //if (Input.GetKeyDown(KeyCode.Space))
           // if ( Input.GetAxis("Jump") == 1 )
            //    fireProjectile();

        }
    }

}