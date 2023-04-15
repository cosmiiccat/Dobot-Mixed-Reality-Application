using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class PosyRequestMR_Pose : MonoBehaviour
{
    public GameObject anchorChild;
    public GameObject anchor;
    private string IP_Address;
    //public string IP_Address;
    //public string getIP_address;

    public void onclick()
    {
        //Vector3 anchorChildPosition = anchorChild.transform.localPosition;
        //Debug.Log(anchorChildPosition.ToString("f3"));
        //getIP_address = Getrequest.receive_output;
        //IP_Address = "http://" + getIP_address + "/MRpos";
        //StartCoroutine(PostRequest(IP_Address, anchorChildPosition.x.ToString("f5") + "," + anchorChildPosition.y.ToString("f5") + "," + anchorChildPosition.z.ToString("f5")));

        IP_Address = Enter_IP_Address.enterIP_Address;
        Vector3 irst = anchor.transform.position;
        Vector3 econd = anchorChild.transform.position;
        Vector3 distance = (irst - econd);
        Debug.Log(distance.ToString("f3"));



        StartCoroutine(PostRequest("http://" + IP_Address + ":5000/MRpos", distance.x.ToString("f5") + "," + distance.y.ToString("f5") + "," + distance.z.ToString("f5")));
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
