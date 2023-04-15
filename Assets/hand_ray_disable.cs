using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class hand_ray_disable : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        PointerUtils.SetHandRayPointerBehavior(PointerBehavior.AlwaysOff);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
