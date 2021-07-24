using UnityEngine.EventSystems;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class ScaleSlider : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    private Slider sl;
    public float minFactor = 1; 
    public float maxFactor = 20; // I suspect 20x correlates with roughly 1.25M
    private TMP_Text spawnText;
    private GameObject spawnTextObject;
    public delegate void ScaleSelf(float scaleSize);
    public static event ScaleSelf ScaleMoved;
    
    void Start()
    {
        sl = GetComponent<Slider>();
       
        spawnText = GetComponentInChildren<TMP_Text>();
        spawnTextObject = spawnText.gameObject;
        spawnTextObject.SetActive(false);
        sl.minValue = minFactor;
        sl.maxValue = maxFactor;
        sl.onValueChanged.AddListener(delegate { OnChange(); });
    }

    // listener... when a slider value is changed, update the value in another script
    void OnChange()
    {    
        //broadcast to spiders to change their scale
        if (ScaleMoved != null)
        {
            ScaleMoved(sl.value);
        }
        int currentValue = Mathf.RoundToInt(sl.value);
        spawnText.text = $"Size Factor: {currentValue}";  
    }

    public void OnPointerDown(PointerEventData ed)
    {
        spawnTextObject.SetActive(true);
    }
    public void OnPointerUp(PointerEventData ed)
    {
        spawnTextObject.SetActive(false);
    }
}
