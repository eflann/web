using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public struct PatientData
{
	public string patientName;

	public PatientData(string name)
	{
		patientName = name;
	}
}

public class NewBehaviourScript : MonoBehaviour {
	[DllImport("__Internal")]
	private static extern void Hello(PatientData data);

	[DllImport("__Internal")]
	private static extern void HelloString(string str);

	[DllImport("__Internal")]
	private static extern void PrintFloatArray(float[] array, int size);

	[DllImport("__Internal")]
	private static extern int AddNumbers(int x, int y);

	[DllImport("__Internal")]
	private static extern string StringReturnValueFunction();

	[DllImport("__Internal")]
	private static extern void BindWebGLTexture(int texture);

	// For initialization 
	void Start() {
		var data = new PatientData("Tom");
		Hello(data);

		/*
		HelloString("This is a string.");

		float[] myArray = new float[10];
		PrintFloatArray(myArray, myArray.Length);

		int result = AddNumbers(5, 7);
		Debug.Log(result);

		Debug.Log(StringReturnValueFunction());
		*/
		var texture = new Texture2D(0, 0, TextureFormat.ARGB32, false);
		BindWebGLTexture(texture.GetNativeTextureID());
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
