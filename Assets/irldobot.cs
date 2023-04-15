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


public class irldobot : MonoBehaviour
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

    private int[,,] policy;
    private Vector3[,] mapper;
    private int[,] obstacles;

    void Awake()
    {
        path = POS.ToArray();// initialize 
        Line = clone.GetComponent<LineRenderer>();// get the linerender component 
        //Line.material = new Material(Shader.Find("particles/additive"));
        Line.SetColors(Color.red, Color.blue);// set the color 
        Line.SetWidth(0.012f, 0.012f);// set the width 
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
        Gradient g = new Gradient();
        GradientColorKey[] gck = new GradientColorKey[2];
        GradientAlphaKey[] gak = new GradientAlphaKey[2];
        gck[0].color = Color.red;
        gck[0].time = 1.0F;
        gck[1].color = Color.blue;
        gck[1].time = -1.0F;
        gak[0].alpha = 0.0F;
        gak[0].time = 1.0F;
        gak[1].alpha = 0.0F;
        gak[1].time = -1.0F;
        g.SetKeys(gck, gak);
        
        for (int i = 0; i < 50; i++)
        {
            //states[i].SetActive(true);
            //states[i].GetComponent<Renderer>().material.color = new Color(0,140,0);
            states[i].GetComponent<Renderer>().material.color = g.Evaluate(0.7f);
           
            //states[i].GetComponent<Renderer>().material.color.a = 0.5f;
        }

        states[1].GetComponent<Renderer>().material.color = Color.black;
        states[33].GetComponent<Renderer>().material.color = Color.black;
        states[18].GetComponent<Renderer>().material.color = Color.black;

        states[39].GetComponent<Renderer>().material.color = Color.blue;
    }

    [System.Obsolete]
    // Update is called once per frame
    void Update()
    {
        policy = new int[,,] {
            {{0,1 }, {0,2 }, {0,3 }, {0,4 }, {0,5 }, {0,6 }, {0,7 }, {0,8 }, {0,9 }, {0,9 } },
            {{1,1 }, {1,2 }, {1,3 }, {1,4 }, {1,5 }, {0,6 }, {1,7 }, {1,8 }, {0,9 }, {0,9 } },
            {{1,1 }, {1,2 }, {1,3 }, {1,4 }, {1,4 }, {1,6 }, {1,6 }, {1,8 }, {1,8 }, {1,9 } },
            {{2,1 }, {2,2 }, {2,2 }, {2,3 }, {2,5 }, {2,6 }, {2,6 }, {2,7 }, {2,8 }, {2,9 } },
            {{3,0 }, {3,1 }, {3,2 }, {3,4 }, {3,5 }, {3,6 }, {3,7 }, {3,7 }, {3,8 }, {3,9 } },
        };

        mapper = new Vector3[,] {
            {new Vector3(-0.25f, 0.02f, 0.725f), new Vector3(-0.2f, 0.02f, 0.725f), new Vector3(-0.15f, 0.02f, 0.725f), new Vector3(-0.10f, 0.02f, 0.725f), new Vector3(-0.05f, 0.02f, 0.725f), new Vector3(-0.0f, 0.02f, 0.725f), new Vector3(0.05f, 0.02f, 0.725f), new Vector3(0.1f, 0.02f, 0.725f), new Vector3(0.15f, 0.02f, 0.725f), new Vector3(0.2f, 0.02f, 0.725f) },
            {new Vector3(-0.25f, 0.02f, 0.675f), new Vector3(-0.2f, 0.02f, 0.675f), new Vector3(-0.15f, 0.02f, 0.675f), new Vector3(-0.10f, 0.02f, 0.675f), new Vector3(-0.05f, 0.02f, 0.675f), new Vector3(-0.0f, 0.02f, 0.675f), new Vector3(0.05f, 0.02f, 0.675f), new Vector3(0.1f, 0.02f, 0.675f), new Vector3(0.15f, 0.02f, 0.675f), new Vector3(0.2f, 0.02f, 0.675f) },
            {new Vector3(-0.25f, 0.02f, 0.625f), new Vector3(-0.2f, 0.02f, 0.625f), new Vector3(-0.15f, 0.02f, 0.625f), new Vector3(-0.10f, 0.02f, 0.625f), new Vector3(-0.05f, 0.02f, 0.625f), new Vector3(-0.0f, 0.02f, 0.625f), new Vector3(0.05f, 0.02f, 0.625f), new Vector3(0.1f, 0.02f, 0.625f), new Vector3(0.15f, 0.02f, 0.625f), new Vector3(0.2f, 0.02f, 0.625f) },
            {new Vector3(-0.25f, 0.02f, 0.575f), new Vector3(-0.2f, 0.02f, 0.575f), new Vector3(-0.15f, 0.02f, 0.575f), new Vector3(-0.10f, 0.02f, 0.575f), new Vector3(-0.05f, 0.02f, 0.575f), new Vector3(-0.0f, 0.02f, 0.575f), new Vector3(0.05f, 0.02f, 0.575f), new Vector3(0.1f, 0.02f, 0.575f), new Vector3(0.15f, 0.02f, 0.575f), new Vector3(0.2f, 0.02f, 0.575f) },
            {new Vector3(-0.25f, 0.02f, 0.525f), new Vector3(-0.2f, 0.02f, 0.525f), new Vector3(-0.15f, 0.02f, 0.525f), new Vector3(-0.10f, 0.02f, 0.525f), new Vector3(-0.05f, 0.02f, 0.525f), new Vector3(-0.0f, 0.02f, 0.525f), new Vector3(0.05f, 0.02f, 0.525f), new Vector3(0.1f, 0.02f, 0.525f), new Vector3(0.15f, 0.02f, 0.525f), new Vector3(0.2f, 0.02f, 0.525f) }
        };

        obstacles = new int[,] {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            {0, 0, 1, 0, 0, 0, 0, 1, 0, 0 },
            {0, 0, 1, 0, 0, 0, 0, 1, 0, 0 },
            {0, 0, 1, 0, 0, 1, 0, 1, 0, 0 },
            {0, 0, 1, 0, 0, 1, 0, 1, 0, 0 }
        };
        
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out pose))
        {
            p1 = pose.Position;
            //("indexObjectPosition:" + point1);
        }

        for (int i = 0; i < 50; i++)
        {
            //gridspace.glowObj(states[i], p1);
            p2 = states[i].transform.localPosition;
            var xhigh = p2[0] + 0.025;
            var xlow = p2[0] - 0.025;
            var yhigh = p2[1] + 0.005;
            var ylow = p2[1] - 0.005;
            var zhigh = p2[2] + 0.025;
            var zlow = p2[2] - 0.025;

            if (p1[0] <= xhigh && p1[0] >= xlow && p1[1] <= yhigh && p1[1] >= ylow && p1[2] <= zhigh && p1[2] >= zlow)
            {
                for (int j = 0; j < 50; j++)
                {
                    //states[i].SetActive(true);
                    states[j].GetComponent<Renderer>().material.color = new Color(0, 140, 0);
                    //states[i].GetComponent<Renderer>().material.color.a = 0.5f;
                }

                states[1].GetComponent<Renderer>().material.color = Color.black;
                states[33].GetComponent<Renderer>().material.color = Color.black;
                states[18].GetComponent<Renderer>().material.color = Color.black;

                states[39].GetComponent<Renderer>().material.color = Color.blue;

                states[i].GetComponent<Renderer>().material.color = Color.red;

                POS.Clear();

                int px = 0, pz = 0;

                if (i == 0)
                {
                    px = 0;
                    pz = 9;
                }
                else if (i == 1)
                {
                    px = 0;
                    pz = 9;
                }
                else if (i == 2)
                {
                    px = 5;
                    pz = 2;
                }
                else if (i == 3)
                {
                    px = 5;
                    pz = 1;
                }
                else if (i == 4)
                {
                    px = 5;
                    pz = 0;
                }
                else if (i == 5)
                {
                    px = 6;
                    pz = 4;
                }
                else if (i == 6)
                {
                    px = 6;
                    pz = 3;
                }
                else if (i == 7)
                {
                    px = 6;
                    pz = 2;
                }
                else if (i == 8)
                {
                    px = 6;
                    pz = 1;
                }
                else if (i == 9)
                {
                    px = 6;
                    pz = 0;
                }
                else if (i == 10)
                {
                    px = 4;
                    pz = 4;
                }
                else if (i == 11)
                {
                    px = 4;
                    pz = 3;
                }
                else if (i == 12)
                {
                    px = 4;
                    pz = 2;
                }
                else if (i == 13)
                {
                    px = 4;
                    pz = 1;
                }
                else if (i == 14)
                {
                    px = 4;
                    pz = 0;
                }
                else if (i == 15)
                {
                    px = 0;
                    pz = 9;
                }
                else if (i == 16)
                {
                    px = 0;
                    pz = 9;
                }
                else if (i == 17)
                {
                    px = 0;
                    pz = 9;
                }
                else if (i == 18)
                {
                    px = 0;
                    pz = 9;
                }
                else if (i == 19)
                {
                    px = 7;
                    pz = 0;
                }
                else if (i == 20)
                {
                    px = 3;
                    pz = 4;
                }
                else if (i == 21)
                {
                    px = 3;
                    pz = 3;
                }
                else if (i == 22)
                {
                    px = 3;
                    pz = 2;
                }
                else if (i == 23)
                {
                    px = 3;
                    pz = 1;
                }
                else if (i == 24)
                {
                    px = 3;
                    pz = 0;
                }
                else if (i == 25)
                {
                    px = 8;
                    pz = 4;
                }
                else if (i == 26)
                {
                    px = 8;
                    pz = 3;
                }
                else if (i == 27)
                {
                    px = 8;
                    pz = 2;
                }
                else if (i == 28)
                {
                    px = 8;
                    pz = 1;
                }
                else if (i == 29)
                {
                    px = 8;
                    pz = 0;
                }
                else if (i == 30)
                {
                    px = 0;
                    pz = 9;
                }
                else if (i == 31)
                {
                    px = 0;
                    pz = 9;
                }
                else if (i == 32)
                {
                    px = 0;
                    pz = 9;
                }
                else if (i == 33)
                {
                    px = 0;
                    pz = 9;
                }
                else if (i == 34)
                {
                    px = 2;
                    pz = 0;
                }
                else if (i == 35)
                {
                    px = 9;
                    pz = 4;
                }
                else if (i == 36)
                {
                    px = 9;
                    pz = 3;
                }
                else if (i == 37)
                {
                    px = 9;
                    pz = 2;
                }
                else if (i == 38)
                {
                    px = 9;
                    pz = 1;
                }
                else if (i == 39)
                {
                    px = 9;
                    pz = 0;
                }
                else if (i == 40)
                {
                    px = 1;
                    pz = 4;
                }
                else if (i == 41)
                {
                    px = 1;
                    pz = 3;
                }
                else if (i == 42)
                {
                    px = 1;
                    pz = 2;
                }
                else if (i == 43)
                {
                    px = 1;
                    pz = 1;
                }
                else if (i == 44)
                {
                    px = 1;
                    pz = 0;
                }
                else if (i == 45)
                {
                    px = 0;
                    pz = 4;
                }
                else if (i == 46)
                {
                    px = 0;
                    pz = 3;
                }
                else if (i == 47)
                {
                    px = 0;
                    pz = 2;
                }
                else if (i == 48)
                {
                    px = 0;
                    pz = 1;
                }
                else if (i == 49)
                {
                    px = 0;
                    pz = 0;
                }

                //px = 0;
                //pz = 1;

                int tmp = px;
                px = pz;
                pz = tmp;

                //int px = 4, pz = 3;

                /*if (p2[0] == -0.25) px = 0;
                else if (p2[0] == -0.2) px = 1;
                else if (p2[0] == -0.15) px = 2;
                else if (p2[0] == -0.10) px = 3;
                else if (p2[0] == -0.05) px = 4;
                else if (p2[0] == 0) px = 5;
                else if (p2[0] == 0.05) px = 6;
                else if (p2[0] == 0.1) px = 7;
                else if (p2[0] == 0.15) px = 8;
                else if (p2[0] == 0.2) px = 9;*/

                //int px = (int)((p2[0]+0.25f)*20), pz = 4 - (int)((p2[2]-0.525f)*20);
                //int px = 1;
                //int pz = 0;
                int tx = px, tz = pz;
                while (true)
                {
                    if(obstacles[px, pz] == 1)
                    {
                        p1 = mapper[tx, tz];
                        p1[2] -= 0.3f;
                        p1[1] = 0.17f;
                        POS.Add(p1);// add the current coordinate into the linked list 
                        path = POS.ToArray();// convert to array 
                        Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                        Line.SetPositions(path);// set the vertex position

                        p1 = mapper[px, pz];
                        p1[2] -= 0.3f;
                        p1[1] = 0.17f;
                        POS.Add(p1);// add the current coordinate into the linked list 
                        path = POS.ToArray();// convert to array 
                        Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                        Line.SetPositions(path);// set the vertex position

                        tx = policy[px, pz, 0];
                        tz = policy[px, pz, 1];
                        p1 = mapper[tx, tz];
                        p1[2] -= 0.3f;
                        p1[1] = 0.17f;
                        POS.Add(p1);// add the current coordinate into the linked list 
                        path = POS.ToArray();// convert to array 
                        Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                        Line.SetPositions(path);// set the vertex position
                    }
                    else
                    {
                        p1 = mapper[px, pz];
                        p1[2] -= 0.3f;
                        POS.Add(p1);// add the current coordinate into the linked list 
                        path = POS.ToArray();// convert to array 
                        Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                        Line.SetPositions(path);// set the vertex position
                    }

                    if (px == 0 && pz == 9) break;

                    tx = px;
                    tz = pz;

                    px = policy[px, pz, 0];
                    pz = policy[px, pz, 1];
                }
            }
                /*if (p1[0] <= xhigh && p1[0] >= xlow && p1[1] <= yhigh && p1[1] >= ylow && p1[2] <= zhigh && p1[2] >= zlow)
                {
                    states[i].GetComponent<Renderer>().material.color = Color.red;

                    POS.Clear();

                    //p1 = (-0.25, 0.02, 0.675);
                    p1[0] = -0.25f;
                    p1[1] = 0.02f;
                    p1[2] = 0.675f - 0.3f;
                    POS.Add(p1);// add the current coordinate into the linked list 
                    path = POS.ToArray();// convert to array 
                    Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                    Line.SetPositions(path);// set the vertex position

                    //p1 = (-0.2, 0.02, 0.675);
                    p1[0] = -0.2f;
                    p1[1] = 0.02f;
                    p1[2] = 0.675f - 0.3f;
                    POS.Add(p1);// add the current coordinate into the linked list 
                    path = POS.ToArray();// convert to array 
                    Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                    Line.SetPositions(path);// set the vertex position

                    //p1 = (-0.2, 0.17, 0.675);
                    p1[0] = -0.2f;
                    p1[1] = 0.17f;
                    p1[2] = 0.675f - 0.3f;
                    POS.Add(p1);// add the current coordinate into the linked list 
                    path = POS.ToArray();// convert to array 
                    Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                    Line.SetPositions(path);// set the vertex position

                    //p1 = (-0.15, 0.17, 0.675);
                    p1[0] = -0.15f;
                    p1[1] = 0.17f;
                    p1[2] = 0.675f - 0.3f;
                    POS.Add(p1);// add the current coordinate into the linked list 
                    path = POS.ToArray();// convert to array 
                    Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                    Line.SetPositions(path);// set the vertex position

                    p1[0] = -0.1f;
                    p1[1] = 0.17f;
                    p1[2] = 0.675f - 0.3f;
                    POS.Add(p1);// add the current coordinate into the linked list 
                    path = POS.ToArray();// convert to array 
                    Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                    Line.SetPositions(path);// set the vertex position

                    p1[0] = -0.1f;
                    p1[1] = 0.02f;
                    p1[2] = 0.675f - 0.3f;
                    POS.Add(p1);// add the current coordinate into the linked list 
                    path = POS.ToArray();// convert to array 
                    Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                    Line.SetPositions(path);// set the vertex position

                    p1[0] = -0.05f;
                    p1[1] = 0.02f;
                    p1[2] = 0.675f - 0.3f;
                    POS.Add(p1);// add the current coordinate into the linked list 
                    path = POS.ToArray();// convert to array 
                    Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                    Line.SetPositions(path);// set the vertex position

                    p1[0] = -0.0f;
                    p1[1] = 0.02f;
                    p1[2] = 0.675f - 0.3f;
                    POS.Add(p1);// add the current coordinate into the linked list 
                    path = POS.ToArray();// convert to array 
                    Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                    Line.SetPositions(path);// set the vertex position

                    p1[0] = 0.05f;
                    p1[1] = 0.02f;
                    p1[2] = 0.725f - 0.3f;
                    POS.Add(p1);// add the current coordinate into the linked list 
                    path = POS.ToArray();// convert to array 
                    Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                    Line.SetPositions(path);// set the vertex position

                    p1[0] = 0.1f;
                    p1[1] = 0.02f;
                    p1[2] = 0.725f - 0.3f;
                    POS.Add(p1);// add the current coordinate into the linked list 
                    path = POS.ToArray();// convert to array 
                    Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                    Line.SetPositions(path);// set the vertex position

                    p1[0] = 0.15f;
                    p1[1] = 0.02f;
                    p1[2] = 0.725f - 0.3f;
                    POS.Add(p1);// add the current coordinate into the linked list 
                    path = POS.ToArray();// convert to array 
                    Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                    Line.SetPositions(path);// set the vertex position

                    p1[0] = 0.2f;
                    p1[1] = 0.02f;
                    p1[2] = 0.725f - 0.3f;
                    POS.Add(p1);// add the current coordinate into the linked list 
                    path = POS.ToArray();// convert to array 
                    Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                    Line.SetPositions(path);// set the vertex position

                }*/
            }
    }
}
