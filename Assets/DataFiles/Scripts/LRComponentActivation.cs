using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class LRComponentActivation : MonoBehaviour
{
    public GameObject[] LR_Components;
    private int i;
    private int activateComponent;
    private string dobot_Pose;
    private string IP_Address;
    private Vector3 LR_ComponentPosition;
    public GameObject Anchor;
    private Vector3 anchorPosition;

    // Start is called before the first frame update
    void Start()
    {
        i = 0;
        activateComponent = 0;
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
        IP_Address = Enter_IP_Address.enterIP_Address;
        Debug.Log("IP_Address" + IP_Address);

        Debug.Log("LR click");
        LR_Components[0].SetActive(false);
        LR_Components[1].SetActive(false);
        LR_Components[2].SetActive(false);
        LR_Components[3].SetActive(false);
        LR_Components[4].SetActive(false);
        LR_Components[5].SetActive(false);
        LR_Components[6].SetActive(false);
        LR_Components[7].SetActive(false);
        LR_Components[8].SetActive(false);
        LR_Components[9].SetActive(false);
        LR_Components[10].SetActive(false);
        LR_Components[11].SetActive(false);
        LR_Components[12].SetActive(false);
        LR_Components[13].SetActive(false);
        LR_Components[14].SetActive(false);
        LR_Components[15].SetActive(false);
        LR_Components[16].SetActive(false);
        LR_Components[17].SetActive(false);
        LR_Components[18].SetActive(false);
        LR_Components[19].SetActive(false);
        LR_Components[20].SetActive(false);
        LR_Components[21].SetActive(false);
        LR_Components[22].SetActive(false);
        LR_Components[23].SetActive(false);
        LR_Components[24].SetActive(false);
        LR_Components[25].SetActive(false);
        LR_Components[26].SetActive(false);
        LR_Components[27].SetActive(false);
        LR_Components[28].SetActive(false);
        LR_Components[29].SetActive(false);
        LR_Components[30].SetActive(false);
        LR_Components[31].SetActive(false);
        LR_Components[32].SetActive(false);
        LR_Components[33].SetActive(false);
        LR_Components[34].SetActive(false);
        LR_Components[35].SetActive(false);
        LR_Components[36].SetActive(false);
        LR_Components[37].SetActive(false);
        LR_Components[38].SetActive(false);
        LR_Components[39].SetActive(false);
        LR_Components[40].SetActive(false);
        LR_Components[41].SetActive(false);
        LR_Components[42].SetActive(false);
        LR_Components[43].SetActive(false);
        LR_Components[44].SetActive(false);
        LR_Components[45].SetActive(false);
        LR_Components[46].SetActive(false);
        LR_Components[47].SetActive(false);
        LR_Components[48].SetActive(false);
        LR_Components[49].SetActive(false);
        
        while (i< 53)
        {
            LR_Components[i].SetActive(false);
            LR_Components[i].GetComponent<Renderer>().material.color = Color.red;
            i = i + 1;
        }
        LR_Components[activateComponent].SetActive(true);
        LR_Components[activateComponent].GetComponent<Renderer>().material.color = Color.green;
        if (activateComponent > 0)
        {
            LR_ComponentPosition = anchorPosition - LR_Components[activateComponent - 1].transform.position;
            Debug.Log("LR position "+ LR_ComponentPosition.ToString("f5"));
        }
        else
        {
            LR_ComponentPosition = new Vector3(0, 0, 0);
        }
        
        StartCoroutine(PostRequest("http://" + IP_Address + ":5000/LR_Computation", LR_ComponentPosition.x.ToString("f5") + "," + LR_ComponentPosition.y.ToString("f5") + "," + LR_ComponentPosition.z.ToString("f5")));


        if (activateComponent > 0)
        {
            
            LR_Components[activateComponent-1].GetComponent<Renderer>().material.color = Color.red;
            LR_Components[activateComponent - 1].SetActive(false);
        }
        activateComponent = activateComponent + 1;

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
