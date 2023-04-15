using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class LR_DataCollection : MonoBehaviour
{
    public GameObject Anchor;
    public GameObject LR_Component;
    private Vector3 anchorPosition;
    private Vector3 LR_ComponentPosition;
    private string IP_Address;
    private string dobot_Pose;
    private Vector3 distanceVector;
    private int i;

    // Start is called before the first frame update
    void Start()
    {
        i = 0;
    }

    // Update is called once per frame
    void Update()
    {
        IP_Address = Enter_IP_Address.enterIP_Address;
        Debug.Log("IP_Address" + IP_Address);
        anchorPosition = Anchor.transform.position;
    }

    public void OnClick()
    {
        if (i <= 52)
        {
            LR_ComponentPosition = LR_Component.transform.position;
            distanceVector = new Vector3(anchorPosition.x - LR_ComponentPosition.x, anchorPosition.y - LR_ComponentPosition.y, anchorPosition.z - LR_ComponentPosition.z);
            StartCoroutine(PostRequest("http://" + IP_Address + ":5000/LR_Computation", distanceVector.x.ToString("f5") + "," + distanceVector.y.ToString("f5") + "," + distanceVector.z.ToString("f5")));
            i += 1;
        }

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
