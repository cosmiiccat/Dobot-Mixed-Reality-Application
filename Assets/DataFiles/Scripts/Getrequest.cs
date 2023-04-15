using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;

public class Getrequest : MonoBehaviour
{
    private string receive_output;
    private Vector3 int_output;
    public TextMeshPro textDisplay;
    private string IP_Address;
    //public string IP_Address;


    public void Onclick()
    {
        StartCoroutine(GetText());
        IP_Address = Enter_IP_Address.finalIP_Address;
    }

    IEnumerator GetText()
    {
        UnityWebRequest www = UnityWebRequest.Get("http://" + IP_Address + ":5000/list");
        yield return www.SendWebRequest();

        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log(www.error);
        }
        else
        {
            // Show results as text
            Debug.Log(www.downloadHandler.text);
            receive_output = www.downloadHandler.text;
            Debug.Log(receive_output);

            // Or retrieve results as binary data
            byte[] results = www.downloadHandler.data;


            //convert string to int
            void stringToVec(string receive_output)
            {
                string[] temp = receive_output.Substring(1, receive_output.Length - 2).Split(',');
                int_output = new Vector3(float.Parse(temp[0]), float.Parse(temp[1]), float.Parse(temp[2]));
                Debug.Log(int_output);
            }

            // vector3 value of receiving data
            Debug.Log(int_output);
            textDisplay.text = receive_output;

        }
    }

}
