using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour {

    Dictionary<string,AudioSource> tracks;
    private int level = 1;
    private GameManager.Sides side = GameManager.Sides.Blue;

    

    // Use this for initialization
    void Start () {
        tracks = new Dictionary<string, AudioSource>();

        AudioSource[] temp = GetComponentsInChildren<AudioSource>();
        
        foreach (AudioSource track in temp)
        {
            tracks.Add(track.name, track);
        }
        Debug.Log(tracks.ToString());

        playMusic(1, GameManager.Sides.Blue);
	}
	
    public void playMusic(int id,GameManager.Sides side)
    {
        tracks[id + "b"].Play();
        tracks[id + "g"].Play();
        tracks[id + "b"].volume =  side == GameManager.Sides.Blue? 1 : 0 ;
        tracks[id + "g"].volume =  side == GameManager.Sides.Green ? 1 : 0;

    }

    public void switchMusic( GameManager.Sides side)
    {
        tracks[level + "b"].volume = side == GameManager.Sides.Blue ? 1 : 0;
        tracks[level + "g"].volume = side == GameManager.Sides.Green ? 1 : 0;
    }

    public void reset()
    {
        tracks[level + "b"].Stop();
        tracks[level + "g"].Stop();
        level = 1;
        side = GameManager.Sides.Blue;
        playMusic(1, GameManager.Sides.Blue);
    }

    public void levelup()
    {
        if (level == 6)
            return;
                
        if (side == GameManager.Sides.Blue)
        {
            side = GameManager.Sides.Green;
            switchMusic( side);
        }
        else
        {
            tracks[level + "b"].Stop();
            tracks[level + "g"].Stop();

            side = GameManager.Sides.Blue;
            level++;
            playMusic(level, side);
        }
    }


    public void playShot()
    {
        tracks["FireEnemy-03"].Play();
        
    }
     
    public void playKill()
    {
        tracks["HitEnemy-01"].Play();
    }

    public void playDead()
    {
        tracks["PlayerDie-01"].Play();
    }

	// Update is called once per frame
	void Update () {
		
	}



}
