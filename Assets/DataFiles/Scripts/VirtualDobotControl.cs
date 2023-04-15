using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VirtualDobotControl : MonoBehaviour
{
    private string dobotControl_Input;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        dobotControl_Input = SpeechInput.dobot_Pose;
    }
}
