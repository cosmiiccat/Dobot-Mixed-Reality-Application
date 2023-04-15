using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine.Networking;   
using UnityEngine;

public class SensorInterface : MonoBehaviour
{
    public static SensorInterface Instance;
    public string IPAddress = "http://192.168.0.106/";
    public int temperature;
    public int humidity;

    private void Awake() 
    {
        if(Instance == null)
        {
            Instance = this;
        }
    }

    void Start()
    {
        StartCoroutine(GetRequest(IPAddress));
    }

    IEnumerator GetRequest(string uri)
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(uri))
        {
            yield return webRequest.SendWebRequest();

            string[] pages = uri.Split('/');
            int page = pages.Length - 1;

            if (webRequest.isNetworkError)
            {
                Debug.Log(pages[page] + ": Error: " + webRequest.error);
            }
            else
            {
                string result = webRequest.downloadHandler.text;
                int tempStringPosition = result.IndexOf("Temperature");
                int humidStringPosition = result.IndexOf("Humidity");

                string temperatureText = result.Substring(tempStringPosition, 17);  
                string humidityText = result.Substring(humidStringPosition, 15);  

                // Extract Temperature
                string temp = "";
                for (int i=0; i< temperatureText.Length; i++)
                {
                    if (Char.IsDigit(temperatureText[i]))
                    {
                        temp += temperatureText[i];
                    }   
                }
                if (temp.Length>0)
                {
                    temperature = Int32.Parse(temp);
                } 

                // Extract Humidity
                temp = "";
                for (int i=0; i< humidityText.Length; i++)
                {
                    if (Char.IsDigit(humidityText[i]))
                    {
                        temp += humidityText[i];
                    }   
                }
                if (temp.Length>0)
                {
                    humidity = Int32.Parse(temp);
                } 
            }
        }
        yield return new WaitForSeconds(5.0f);
        StartCoroutine(GetRequest(IPAddress));
    }
}
