using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    /// <summary>
    /// GAME STATE VARIABLES
    /// </summary>
    public int level = 0;
    public GameObject background;
    public List<List<Vector3>> recordings;
    public enum Sides { Green, Blue };
    private Sides CurrentSide;
    public bool AllowForgivness = false;
    public List<Player> Enemies;
    public List<Player> Friends;
    public List<GameObject> projectiles;
    public Player ActivePlayer;


    /// <summary>
    /// PREFABS FOR INSTANIZATION
    /// </summary>
    public Player Player;
    public Sprite Blue;
    public Sprite Green;
    public Sprite BlueEcho;
    public Sprite GreenEcho;

    
    /// <summary>
    /// SCENE LIVE OBJECTS REFRENCES
    /// </summary>
    public GameObject GreenText;
    public GameObject BlueText;
    public GameObject ForgiveOne;
    public GameObject ForgiveTwo;
    public SoundManager sndManager;

    
    private bool resetPending = false;


    // Use this for initialization
    void Start()
    {
        recordings = new List<List<Vector3>>();
        CurrentSide = Sides.Blue;
    }

    private void Awake()
    {
        //sndManager.play(1,Sides.Blue);    
    }


    public void Pause()
    {
        if (Time.timeScale == 0 )
            Time.timeScale = 1;
        else
            Time.timeScale = 0;

        
    }

    void CharacterShotHandler(GameObject shot)
    {
        projectiles.Add(shot);
        sndManager.playShot();
    }

    void CharacterHitHandler(Player p)
    {
        if (AllowForgivness)
        {
            AllowForgivness = false;
            ForgiveOne.SetActive(false);
            ForgiveTwo.SetActive(false);
            StopCoroutine("Forgiveness");
        }


        if (resetPending)
            return;

        //Debug.Log("HIT CHAR: " + p.ToString());
        if (p == ActivePlayer)
        {
            sndManager.playDead();
          //  Debug.Log("DEAD");
            p.killAnim();
            Invoke("resetLevel", 1);
            resetPending = true;
            AllowForgivness = true;
        }
        else if ( Enemies.IndexOf(p) != -1  )
        {
            sndManager.playKill();
            //Debug.Log("Killed enemy");
            p.StopAllCoroutines();
            Enemies.Remove(p);
            p.killAnim();
            if (Enemies.Count == 0)
            {
                resetPending = true;
                Invoke("EndCurrentLevel", 0.6f);
            }
            
        }
        else if (Friends.IndexOf(p) != -1 )
        {
            sndManager.playKill();
            //Debug.Log("friend died");
            p.StopAllCoroutines();
            Friends.Remove(p);
            p.killAnim();


        }
    }

    void resetLevel()
    {
        sndManager.reset();

        if (CurrentSide == Sides.Green)
            background.GetComponent<Animator>().SetTrigger("flip");
        
        BlueText.SetActive(true);

        resetPending = false;

        //SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        
        recordings = new List<List<Vector3>>();
        CurrentSide = Sides.Blue;

        foreach (Player p in Enemies)
        {
            p.StopAllCoroutines();
            Destroy(p.gameObject);
        }
        foreach (Player p in Friends)
        {
            p.StopAllCoroutines();
            Destroy(p.gameObject);
        }

      

        Invoke("StartPlay", 1);

    }

    void EndCurrentLevel()
    {
        resetPending = false;

        //Debug.Log("end current level");
        foreach ( Player p in Friends)
        {
            p.StopAllCoroutines();
            //Friends.Remove(p);
            Destroy(p.gameObject);
        }
    

        recordings.Add(ActivePlayer.stopRecording());

        ActivePlayer.StopAllCoroutines();
        Destroy(ActivePlayer.gameObject);
        
        
        StartNextLevel();
    }

    public void StartPlay()
    {
        level = 0;

        BlueText.SetActive(false);

        Enemies = new List<Player>();
        Friends = new List<Player>();

        // Blue
        Player B = Instantiate(Player, transform.parent);
        B.GetComponent<SpriteRenderer>().sprite = Blue;
        B.transform.position = new Vector2(-4, -4);
        B.interactive = true;
        B.startRecording(true);
        
        B.gameObject.layer = 8;
        
        B.ShotDetected += new Player.ShotReport(CharacterShotHandler);

        // Green
        Player G = Instantiate(Player, transform.parent);
        G.GetComponent<SpriteRenderer>().sprite = Green;
        G.transform.position = new Vector2(0, 3);
        G.transform.transform.Rotate(0, 0, 180);
        G.interactive = false;
        G.HitDetected += new Player.HitReport(CharacterHitHandler);

        G.ShotDetected += new Player.ShotReport(CharacterShotHandler);

        G.gameObject.layer = 9;

        Enemies.Add(G);
        ActivePlayer = B;

        if (AllowForgivness)
            StartCoroutine("Forgiveness");
    }

    public IEnumerator Forgiveness()
    {

        yield return new WaitForSeconds(20);

        ForgiveOne.SetActive(true);

        yield return new WaitForSeconds(5);

        ForgiveOne.SetActive(false);

        yield return new WaitForSeconds(15);

        ForgiveTwo.SetActive(true);

        yield return new WaitForSeconds(10);

        ForgiveTwo.SetActive(false);

    }

    void StartNextLevel()
    {
        foreach ( GameObject g in projectiles )
        {
            Destroy(g);
        }
        //Debug.Log("start next level");
        level++;

        
        if (CurrentSide == Sides.Blue)
        {
            CurrentSide = Sides.Green;
            GreenText.SetActive(true);
        }
        else
        {
            CurrentSide = Sides.Blue;
            BlueText.SetActive(true);
        }

        sndManager.levelup();

        //background.transform.Rotate(0, 0, 180);
        background.GetComponent<Animator>().SetTrigger("flip");
        Invoke("StartPlayback", 1);

        //StartPlayback(); 
    }

    void HideText()
    {
        GreenText.SetActive(false);
        BlueText.SetActive(false);
    }


    void StartPlayback()
    {

        Invoke("HideText", 1);

        Enemies = new List<Player>();
        Friends = new List<Player>();

        Player P = Instantiate(Player, transform.parent);
        
        if ( level != 1 )
            P.transform.position = new Vector2( Random.Range(-8f,8f) , Random.Range(-3f,-5f));
        else
            P.transform.position = new Vector2(0,-4);


        //P.interactive = true;
        P.startRecording();
        P.HitDetected += new Player.HitReport(CharacterHitHandler);
        P.ShotDetected += new Player.ShotReport(CharacterShotHandler);

        ActivePlayer = P;

        if (CurrentSide == Sides.Blue)
        {
            P.GetComponent<SpriteRenderer>().sprite = Blue;
            P.gameObject.layer = 8;
        }
        else
        {
            P.GetComponent<SpriteRenderer>().sprite = Green;
            P.gameObject.layer = 9;
        }

        int count = 0;
        foreach (List<Vector3> rec in recordings )
        {
            Player E = Instantiate(Player, transform.parent);
            E.HitDetected += new Player.HitReport(CharacterHitHandler);
            E.ShotDetected += new Player.ShotReport(CharacterShotHandler);

            if ( CurrentSide == Sides.Blue )
            { 
                if ( count % 2 == 0 )
                {
                    E.GetComponent<SpriteRenderer>().sprite = Blue;// BlueEcho;
                    E.GetComponent<SpriteRenderer>().color = new Color(1,1,1,0.5f);// BlueEcho;
                    E.gameObject.layer = 8;
                    Friends.Add(E);
                    E.startPlayback(rec, false);
                }
                else
                {
                    E.GetComponent<SpriteRenderer>().sprite = Green;// GreenEcho;
                    E.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0.4f);// GreenEcho;
                    E.gameObject.layer = 9;
                    Enemies.Add(E);
                    E.startPlayback(rec, true );
                }
                
            }
            else
            {
                if (count % 2 == 0)
                {
                    E.GetComponent<SpriteRenderer>().sprite = Blue;
                    E.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0.5f);// BlueEcho;
                    E.gameObject.layer = 8;
                    Enemies.Add(E);
                    E.startPlayback(rec, true);
                }
                else
                {
                    E.GetComponent<SpriteRenderer>().sprite = Green;
                    E.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 0.4f);// GreenEcho;
                    E.gameObject.layer = 9;
                    Friends.Add(E);
                    E.startPlayback(rec, false);
                }
            }

            count++;

        }
    }


    	// Update is called once per frame
	void Update () {

       
        if ( Input.GetKeyUp(KeyCode.P))
        {
            Pause();
        }


    }

  
    
}

