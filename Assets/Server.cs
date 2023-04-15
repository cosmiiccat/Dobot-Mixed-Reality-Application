using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Text;
using UnityEngine;


public class Server : MonoBehaviour
{
    public static UdpClient listener;
    public static bool listen = true;
    public static Dictionary<String, List<Sensor>> NodeListData = new Dictionary<string, List<Sensor>>();

    public enum Mode { REAL = 0, SIMULATED = 1 }

    public static Mode ACTIVE_MODE;
    static IPEndPoint listenPort = null;

    public static int humidity = 69;
    public static int current = 24;
    public static int voltage = 12;

    
    private void Start()
    {
        if (SensorInterface.Instance == null)
        {
            ACTIVE_MODE = Mode.SIMULATED;
        }
        else
        {
            ACTIVE_MODE = Mode.REAL;
        }
        StartCoroutine(StartServer());
    }
    


    public IEnumerator StartServer()
    {
        // yield return new WaitForSeconds(0.0f);
        bool done = false;
        int portNumber = 14045;
        // print("Starting Simple UDP Server" + portNumber);
        String[] NODE_SENSOR_SEPARATOR = { "eb001336" };
        String[] VALUE_SEPARATOR = { "eb0015ca" };
        String[] SENSOR_SEPARATOR = { "eb001728" };
        String[] NODE_SEPARATOR = { "eb003826" };

        // try
        // {
        //     listenPort = new IPEndPoint(IPAddress.Any, portNumber);
        //     listener = new UdpClient(listenPort);
        // }
        // catch (Exception ee)
        // {
        //     print("Keep Going");
        // }

        // byte[] receivedData;
        String data = "";

        while (!done)
        {

            switch (ACTIVE_MODE)
            {
                case Mode.REAL:

                    // try
                    // {
                    //     receivedData = listener.Receive(ref listenPort);
                    // }
                    // catch (Exception e)
                    // {
                    //     break;
                    // }

                    // data = Encoding.ASCII.GetString(receivedData);
                    
                    for (var i = 1; i < 7; i++)
                    {
                        data += "node" + i + "eb001336humidityeb0015ca" + SensorInterface.Instance.humidity + "eb001728temperatureeb0015ca" + SensorInterface.Instance.temperature
                        + "eb001728heatindexeb0015ca80.60eb001728inCeb0015ca29.12eb001728LIGHTeb0015ca-2.00eb001728SMOKEeb0015ca7.00eb003826";
                    }
                    
                    break;

                case Mode.SIMULATED:
                    data = getSimulatedData();
                    yield return new WaitForSeconds(1.5f);
                    break;
            }


            String[] nodes = data.Split(NODE_SEPARATOR, StringSplitOptions.RemoveEmptyEntries);

            foreach (String i in nodes)
            {
                String NodeID = i.Split(NODE_SENSOR_SEPARATOR, StringSplitOptions.RemoveEmptyEntries)[0];
                var sensors = new List<Sensor>();
                var SensorString = i.Split(NODE_SENSOR_SEPARATOR, StringSplitOptions.RemoveEmptyEntries)[1];
                var SensorsData = SensorString.Split(SENSOR_SEPARATOR, StringSplitOptions.RemoveEmptyEntries);
                foreach (String l in SensorsData)
                {
                    var s = new Sensor();
                    s.SensorName = l.Split(VALUE_SEPARATOR, StringSplitOptions.RemoveEmptyEntries)[0];
                    s.SensorValue = Convert.ToDouble(l.Split(VALUE_SEPARATOR, StringSplitOptions.RemoveEmptyEntries)[1]);
                    sensors.Add(s);
                }

                if (NodeListData.ContainsKey(NodeID)) NodeListData[NodeID] = sensors;
                else NodeListData.Add(NodeID, sensors);
            }

            yield return new WaitForSeconds(0.5f);
        }
    }


    private static string getSimulatedData()
    {

        var dataStrFinal = "";
        for (var i = 1; i < 7; i++)
        {
            var r = new System.Random();

            var temp = humidity;
            humidity = r.Next(69, 73);
            var tempH = humidity - temp;
            if (Math.Abs((tempH)) > 2) humidity = temp;


            temp = voltage;
           voltage = r.Next(10, 30);
            temp = current;
            current = r.Next(25, 200);
            //var tempT = temperature - temp;
            //if (Math.Abs((tempT)) > 2) temperature = temp;
            dataStrFinal += "node" + i + "eb001336humidityeb0015ca" + humidity + "eb001728currenteb0015ca" + current + "eb001728voltageeb0015ca" + voltage + "eb001728heatindexeb0015ca80.60eb001728inCeb0015ca29.12eb001728LIGHTeb0015ca-2.00eb001728SMOKEeb0015ca7.00eb003826";
        }
        return dataStrFinal;
    }


    public class Sensor
    {
        public String SensorName;
        public double SensorValue;
    }
}

