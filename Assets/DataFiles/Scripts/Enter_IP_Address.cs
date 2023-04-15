using Microsoft.MixedReality.Toolkit.Experimental.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enter_IP_Address : MonoBehaviour
{
    private float IP_Address;
    public static string finalIP_Address;
    public GameObject getIP_Address;
    private MRTKUGUIInputField getValue;
    public static string enterIP_Address;

    public void onclick()
    {

        getValue = getIP_Address.GetComponent<MRTKUGUIInputField>();
        enterIP_Address = getValue.text;
        Debug.Log(enterIP_Address);
        float.TryParse(enterIP_Address, out IP_Address);
        Debug.Log(IP_Address);
        finalIP_Address = ("http://" + enterIP_Address + ":5000/api");
        Debug.Log(finalIP_Address);

        // Deactivate Inputfeild and Text
        //GameObject.Find("Canvas/VerticalGroup/Text (TMP)").SetActive(false);
        GameObject.Find("Canvas").SetActive(false);
        getIP_Address.SetActive(false);
    }

}
