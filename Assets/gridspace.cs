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


public class gridspace : MonoBehaviour
{
    public GameObject[] states;
    private Vector3 p1;
    private Vector3 p2;
    public bool sts;
    MixedRealityPose pose;

    public GameObject clone;// this is an empty object. Only one linerenderer component is added 
    private LineRenderer Line;
    Vector3[] path;
    List<Vector3> POS = new List<Vector3>();
    private Vector3 Hand_POS;

    void Awake()
    {
        path = POS.ToArray();// initialize 
        Line = clone.GetComponent<LineRenderer>();// get the linerender component 
        //Line.material = new Material(Shader.Find("particles/additive"));
        Line.SetColors(Color.blue, Color.red);// set the color 
        Line.SetWidth(0.01f, 0.01f);// set the width 
    }


    /*static void glowObj(GameObject Obj, Vector3 p1)
    {
        Vector3 p2;
        p2 = Obj.transform.position;
        var xhigh = p2[0] + 0.025;
        var xlow = p2[0] - 0.025;
        var yhigh = p2[1] + 0.005;
        var ylow = p2[1] - 0.005;
        var zhigh = p2[2] + 0.025;
        var zlow = p2[2] - 0.025;

        if (p1[0] <= xhigh && p1[0] >= xlow && p1[1] <= yhigh && p1[1] >= ylow && p1[2] <= zhigh && p1[2] >= zlow)
        {
            Obj.GetComponent<Renderer>().material.color = new Color(140, 0, 0);
        }

        return;
    }*/

    // Start is called before the first frame update
    void Start()
    {
        for(int i=0; i<50; i++)
        {
            //states[i].SetActive(true);
            states[i].GetComponent<Renderer>().material.color = Color.green;
        }
    }

    [System.Obsolete]
    // Update is called once per frame
    void Update()
    {
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out pose))
        {
            p1 = pose.Position;
            //("indexObjectPosition:" + point1);
        }

        for (int i=0; i<50; i++)
        {
            //gridspace.glowObj(states[i], p1);
            p2 = states[i].transform.position;
            var xhigh = p2[0] + 0.025;
            var xlow = p2[0] - 0.025;
            var yhigh = p2[1] + 0.005;
            var ylow = p2[1] - 0.005;
            var zhigh = p2[2] + 0.025;
            var zlow = p2[2] - 0.025;

            if (p1[0] <= xhigh && p1[0] >= xlow && p1[1] <= yhigh && p1[1] >= ylow && p1[2] <= zhigh && p1[2] >= zlow)
            {
                states[i].GetComponent<Renderer>().material.color = Color.red;
            }
        }

        for (int i=0; i<50; i++)
        {
            if(states[i].GetComponent<Renderer>().material.color == Color.red)
            {
                if(i != 39)
                {
                    POS.Add(p1);// add the current coordinate into the linked list 
                    path = POS.ToArray();// convert to array 
                    Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                    Line.SetPositions(path);// set the vertex position
                }
                else
                {
                    for(int j=0; j<50; j++)
                    {
                        states[j].GetComponent<Renderer>().material.color = Color.green;
                    }

                    states[i].GetComponent<Renderer>().material.color = Color.red;

                }
                
            }
        }
    }
}
