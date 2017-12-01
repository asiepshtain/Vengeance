using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class hugzone : MonoBehaviour {

    public GameManager gm;

    void OnTriggerEnter2D(Collider2D other)
    {
        if ( other.tag != "Projectile")
            gm.HugZoneEnter();

    }

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
