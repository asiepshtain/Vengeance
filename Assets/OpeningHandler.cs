using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpeningHandler : MonoBehaviour {

    public Player shooter;
    public GameManager boss;
	// Use this for initialization
	void shoot () {
        shooter.Flip = true;
        shooter.fireProjectile();
    }
	
    void done()
    {
        boss.StartPlay();
        Destroy(this.gameObject);
    }

	// Update is called once per frame
	void Update () {
		
	}
}
