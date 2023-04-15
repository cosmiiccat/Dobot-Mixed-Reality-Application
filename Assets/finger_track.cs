using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;


public class finger_track : MonoBehaviour
{
    MixedRealityPose pose;
    private Vector3 start;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexDistalJoint, Handedness.Right, out pose))
        //{
            //end = pose.Position;
        //}
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out pose))
        {
            //indexObject.GetComponent<Renderer>().enabled = true;
            start = pose.Position;
            //var dir = end - start;
            //var mid = -((dir) * 4.0f) + end;
            var mid = start;
            //indexObject.transform.position = pose.Position;
            //indexObject.transform.position = new Vector3(pose.Position.x, pose.Position.y, pose.Position.z+0.1f);
            //indexObject.transform.position = mid;
            //indexObjectPosition = indexObject.transform.position;
            print("indexObjectPosition:" + mid);
            //Debug.Log("Index object position " + indexObject.transform.position);
            //Debug.Log(IP_Address);

        }
    }
}
