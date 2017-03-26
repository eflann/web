//Rextester.Program.Main is the entry point for your code. Don't change it.
//Compiler version 4.0.30319.17929 for Microsoft (R) .NET Framework 4.5

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

public struct PatientData 
{
    private string firstName;
    private char lastInit;
    private int dobMonth;
    private int dobDay;
    private int dobYear;
    private Dictionary<string, int> symptoms;

    public PatientData(string first, char last, int dobMo, int dobD, int dobYr) 
    {
        firstName = first;
        lastInit = last;
        dobMonth = dobMo;
        dobDay = dobD;
        dobYear = dobYr;
        symptoms = new Dictionary<string, int>();
    }
    public void addSymptom(string symptom, int severityLevel) 
    {
        symptoms[symptom] = severityLevel;
    }

    public string exportAsJSON() 
    {
        List<string> allStrings = new List<string>();
        allStrings.Add(string.Format("\"first\": \"{0}\"", firstName));
        allStrings.Add(string.Format("\"last\": \"{0}\"", lastInit));
        allStrings.Add(string.Format("\"dobMonth\": \"{0}\"", dobMonth));
        allStrings.Add(string.Format("\"dobDay\": \"{0}\"", dobDay));
        allStrings.Add(string.Format("\"dobYear\": \"{0}\"", dobYear));

        string symptomsStr = "\"symptoms\": [";
        List<string> symptomsStrings = new List<string>();
        foreach(var entry in symptoms)
        {
            string str = "{" +  string.Format("\"description\": \"{0}\", \"severityLevel\": {1}", entry.Key, entry.Value) + "}";
            symptomsStrings.Add(str);
        }
        symptomsStr += String.Join(",", symptomsStrings.ToArray());
        symptomsStr += "]";
        allStrings.Add(symptomsStr);

        return "{" + String.Join(",", allStrings.ToArray()) + "}";
    }       
}

namespace Rextester
{
    public class Program
    {
        public static void Main(string[] args)
        {
            //Your code goes here
            Console.WriteLine("Hello, world!");
            var data = new PatientData("Tom", 'F', 5, 5, 1992);
            data.addSymptom("itchy", 5);
            data.addSymptom("itchy", 1);
            Console.WriteLine(data.exportAsJSON());
            
        }
    }
}