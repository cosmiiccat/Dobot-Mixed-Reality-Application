using Microsoft.MixedReality.Toolkit.Experimental.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class Post_IP_Address : MonoBehaviour
{
    public GameObject anchorChild;
    public GameObject anchor;
    private float IP_Address;
    private string finalIP_Address;
    public GameObject getIP_Address;
    private MRTKUGUIInputField getValue;
    public static string enterIP_Address;
    //public string getIP_address;
    //public string IP_Address;

    public void onclick()
    {

        Vector3 irst = anchor.transform.position;
        Vector3 econd = anchorChild.transform.position;
        Vector3 distance = (irst - econd);
        Debug.Log(distance.ToString("f3"));
        getValue = getIP_Address.GetComponent<MRTKUGUIInputField>();
        enterIP_Address = getValue.text;
        Debug.Log(enterIP_Address);
        float.TryParse(enterIP_Address, out IP_Address);
        Debug.Log(IP_Address);
        finalIP_Address = ("http://" + enterIP_Address + ":5000/api");
        Debug.Log(finalIP_Address);
        StartCoroutine(PostRequest(finalIP_Address, distance.x.ToString("f5") + "," + distance.y.ToString("f5") + "," + distance.z.ToString("f5")));

        // Deactivate Inputfeild and Text
        GameObject.Find("Canvas/VerticalGroup/Text (TMP)").SetActive(false);
        getIP_Address.SetActive(false);
    }


    IEnumerator PostRequest(string url, string json)
    {
        var uwr = new UnityWebRequest(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();


        //Send the request then wait here until it returns
        yield return uwr.SendWebRequest();

        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);
        }
    }
}
