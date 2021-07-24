using UnityEngine.EventSystems;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SpawnSlider : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    private Slider sl;
    public float min = 1f;
    public float max = 30f;
    // references to text mesh pro text and to the placement script
    private PlaceObjectsOnPlane placeObjects;
    private TMP_Text spawnText;
    private GameObject spawnTextObject;
    
    void Start()
    {
        sl = GetComponent<Slider>();
        placeObjects = GameObject.FindGameObjectWithTag("ARSessionOrigin").GetComponent<PlaceObjectsOnPlane>();
        spawnText = GetComponentInChildren<TMP_Text>();
        spawnTextObject = spawnText.gameObject;
        spawnTextObject.SetActive(false);
        sl.minValue = min;
        sl.maxValue = max;
        sl.onValueChanged.AddListener(delegate { OnChange(); });
    }

    // listener... when a slider value is changed, update the value in another script
    void OnChange()
    {    
        int currentValue = Mathf.RoundToInt(sl.value);
        placeObjects.SpawnAmount = currentValue;
        spawnText.text = $"Spawn Size: {currentValue}";  
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
