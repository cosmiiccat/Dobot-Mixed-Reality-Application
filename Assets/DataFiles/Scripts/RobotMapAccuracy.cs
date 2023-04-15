using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class RobotMapAccuracy : MonoBehaviour
{
    public GameObject anchor, mapObject;
    private Vector3 mapObjectPos, anchorPos, sendPos;
    private string IP_Address;
    private string dobot_Pose;
    private float GO_height;
    private int i;

    // Start is called before the first frame update
    void Start()
    {
        i = 0;
        GO_height = 0;
    }

    // Update is called once per frame
    void Update()
    {
        anchorPos = anchor.transform.position;
        mapObjectPos = mapObject.transform.position;
        IP_Address = Enter_IP_Address.enterIP_Address;
    }

    public void changeHeight()
    {
        i = i + 1;
        if (i == 1)
        {
            GO_height = 0.05f;
            mapObject.transform.position = new Vector3(mapObjectPos.x, mapObjectPos.y + GO_height, mapObjectPos.z);
        }
        else if (i == 2)
        {
            GO_height = 0.1f;
            mapObject.transform.position = new Vector3(mapObjectPos.x, mapObjectPos.y + GO_height, mapObjectPos.z);
        }
        else
        {
            i = 0;
            GO_height = -0.15f;
        }
    }

    public void OnClick()
    {
        sendPos = anchorPos - mapObjectPos;
        StartCoroutine(PostRequest("http://" + IP_Address + ":5000/robotExperiment", sendPos.x.ToString("f5") + "," + sendPos.y.ToString("f5") + "," + sendPos.z.ToString("f5")));
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
            dobot_Pose = uwr.downloadHandler.text;
            Debug.Log("Dobot Position" + dobot_Pose);
        }
    }
}
