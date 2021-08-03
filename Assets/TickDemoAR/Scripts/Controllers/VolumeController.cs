using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VolumeController : MonoBehaviour
{
    Toggle toggle;
    public GameObject gameAudioManager;
    void Start()
    {
        toggle = GetComponent<Toggle>();
        toggle.onValueChanged.AddListener(delegate { OnToggleChanged(); }); 
    }
   
    void OnToggleChanged()
    {
      if (!toggle.isOn)
      {
          //disable volume
          gameAudioManager.SetActive(false);
      }
      else 
      {
          //enable volume
          gameAudioManager.SetActive(true);
      }
    }
}
