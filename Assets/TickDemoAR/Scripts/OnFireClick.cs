using UnityEngine;
using UnityEngine.EventSystems;

public class OnFireClick : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public delegate void FireGun();
    public static event FireGun Fire;
    public delegate void StopGun();
    public static event StopGun Stop;

    public void OnPointerDown(PointerEventData ed)
    {
      if (Fire != null)
      {
        Fire();
      }
    }

    public void OnPointerUp(PointerEventData ed)
    {
      if (Stop != null)
      {
        Stop();
      }
    }
}
