using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static Server;

public class ProgressBarBehavior : MonoBehaviour
{

    public Transform LoadingBar;
    public Transform TextIndicator;
    public Transform Unit;
    public Transform Image;

    private int value =0;
    private string valueT ="";
    private string valueText ="";
    private int maxvalue = 0;
    List<Sensor> sensors;

    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        string nodeName = this.name.Substring(this.name.ToLower().LastIndexOf("node")).ToLower();
        //print("nodeName " + nodeName);
        NodeListData.TryGetValue(nodeName, out sensors);
        //print("NodeListData.Count " + NodeListData.Count);
        //print("Length " + sensors.Count);

        if (sensors != null)
            foreach (Sensor s in sensors)
            {
                if (this.name.ToLower().Contains(s.SensorName.ToLower()))
                {
                   value = (int)s.SensorValue;
                    valueText = s.SensorName.ToLower();
                    //print("value " + value);
                    
                }
            }
        Debug.Log(valueText);

        //print(Image.GetComponent<RawImage>().texture);
        if (valueText.ToLower().Equals("humidity"))
        {
            valueT = value + "%";
            var t= Image.GetComponent<RawImage>().texture;
            Image.GetComponent<RawImage>().texture = Resources.Load("img/Humidity") as Texture2D;
            

        }
        if (valueText.ToLower().Equals("current"))
        {
            valueT = value + "A";
            maxvalue = 200;
            //Image.GetComponent<RawImage>().texture= Resources.Load("img/Current") as Texture2D;
            Debug.Log("Loaded");
        }

        if (valueText.ToLower().Equals("voltage"))
        {
            valueT = value + "V";
            maxvalue = 30;
            //Image.GetComponent<RawImage>().texture= Resources.Load("img/Current") as Texture2D;
            Debug.Log("Loaded");
        }


        TextIndicator.GetComponent<TextMeshPro>().text = (valueT) + "";
        Unit.GetComponent<TextMeshPro>().text = (valueText).ToString().ToUpper() + "";

        float val = (float)value;
        Debug.Log(val);

        LoadingBar.GetComponent<Image>().fillAmount = val / maxvalue;
        if (LoadingBar.GetComponent<Image>().fillAmount > 0.8)
        {
            LoadingBar.GetComponent<Image>().color = Color.red;
        }
        else
        {
            LoadingBar.GetComponent<Image>().color = Color.green;
        }

    }
}


