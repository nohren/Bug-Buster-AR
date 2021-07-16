using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class OnButtonClick : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public delegate void ShakeTheTree();
    public static event ShakeTheTree OnShakingTheTree;
    public delegate void StillTree();
    public static event StillTree FinishedShakingTree;
    public void OnPointerDown(PointerEventData ed)
    {
      if (OnShakingTheTree != null)
      {
        OnShakingTheTree();  
      }
    }

    public void OnPointerUp(PointerEventData ed)
    {
      if (FinishedShakingTree != null)
      {
        FinishedShakingTree();
      }
    }
}
