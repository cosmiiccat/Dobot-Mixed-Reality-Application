using Microsoft.MixedReality.Toolkit.Experimental.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GetIP : MonoBehaviour
{
    public GameObject getIP_Address;
    private MRTKUGUIInputField getValue;
    public static string enterIP_Address;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }


    public void OnClick()
    {
        getValue = getIP_Address.GetComponent<MRTKUGUIInputField>();
        enterIP_Address = getValue.text;
        Debug.Log(enterIP_Address);
    }
}
