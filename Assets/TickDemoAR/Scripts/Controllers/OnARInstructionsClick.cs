using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class OnARInstructionsClick : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public delegate void AROnboard();
    public static event AROnboard AROnboarding;
    public delegate void StillTree();
    public static event StillTree FinishedShakingTree;
    private UIManager m_UIManager;
    private GameObject m_ScreenSpaceUI;

    private void Start()
    {
      m_UIManager = GameObject.FindGameObjectWithTag("AROnboarding").GetComponent<UIManager>();
      m_ScreenSpaceUI = GameObject.FindGameObjectWithTag("AROnboarding");
    }
    public void OnPointerDown(PointerEventData ed)
    {
      if (AROnboarding != null)
      {
        AROnboarding();  
      }
      if (m_UIManager.UXOrderedQueue.Count == 0)
      {
        m_UIManager.AddToQueue(new UXHandle(UIManager.InstructionUI.CrossPlatformFindAPlane, UIManager.InstructionGoals.FoundAPlane));
        m_UIManager.AddToQueue(new UXHandle(UIManager.InstructionUI.TapToPlace, UIManager.InstructionGoals.PlacedAnObject));
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
