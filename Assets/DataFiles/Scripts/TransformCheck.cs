using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class TransformCheck : MonoBehaviour
{
    private string dobot_Pose;
    private string IP_Address;
    public GameObject Anchor, Goal;
    private Vector3 sendValue;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        IP_Address = Enter_IP_Address.enterIP_Address;
        sendValue = Anchor.transform.position - Goal.transform.position;
    }

    public void SendData()
    {
        StartCoroutine(PostRequest("http://" + IP_Address + ":5000/homoTransform", sendValue.x.ToString("f5") + "," + sendValue.y.ToString("f5") + "," + sendValue.z.ToString("f5")));

    }

    IEnumerator PostRequest(string url, string json)
    {
        var uwr = new UnityWebRequest(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        //yield return new WaitForSeconds(5);

        //Send the request then wait here until it returns
        yield return uwr.SendWebRequest();

        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);
            dobot_Pose = uwr.downloadHandler.text;
            Debug.Log("Dobot Position" + dobot_Pose);
        }
    }
}
