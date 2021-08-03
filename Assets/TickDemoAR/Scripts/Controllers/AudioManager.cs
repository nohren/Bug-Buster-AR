using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public static AudioManager SharedInstance;
    private AudioClip m1a1Sound;
    private AudioClip spiderDeath1Sound;
    private AudioClip spiderDeath2Sound;
    public AudioSource gunAudioSource;
    private AudioClip[] spiderAudioClips;
    void Start()
    {
        m1a1Sound = Resources.Load<AudioClip>("M1A1");
        gunAudioSource.clip = m1a1Sound;
        spiderDeath1Sound = Resources.Load<AudioClip>("SpiderDeath1");
        spiderDeath2Sound = Resources.Load<AudioClip>("SpiderDeath2");
        spiderAudioClips = new AudioClip[] {
          spiderDeath1Sound,
          spiderDeath2Sound
        };
        SharedInstance = this;
    }

    public void PlayGunSound()
    {
      gunAudioSource.Play();
    }
    public void PlaySpiderDeathSound(AudioSource spiderInstanceAudioSource)
    {
      // using PlayOneShot for code readability and slight efficiency with one less line of code.  Either way, the instance audio source 
      // should only be recieving one signal to Play because as the spider is hit, it is set inactive or set active false.
      spiderInstanceAudioSource.PlayOneShot(spiderAudioClips[GenerateRandomInt()]);
    }
    private int GenerateRandomInt()
    {
        return UnityEngine.Random.Range(0, spiderAudioClips.Length);
    }
}
