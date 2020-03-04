#include "StringFunctions.hpp"
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

std::string * StringFunctions::returnStringArray(std::string fullString,std::string delims)
{
 
    std::string *   returnThis = new string[50];

    // for(int i = 0; i < fullString.length(); i ++)
    // {
    //     //cout << fullString[i];
    //     returnThis[i] = fullString[i] + fullString[i+1];
    // }

    int d = 0;
    string currSpot = "";
    string plus = "+";
    string minus = "-";
    string times = "*";
    string divide = "/";
    //har plus = '+';
    //s1.find(s2) != std::string::npos
    //currentThing !=  plus ||currentThing !=minus||currentThing !=times ||currentThing !=divide|| 
    for(int i =0; i < fullString.length(); i ++)
    {
        string currentThing (1,fullString[i]);
        if(currentThing.find(plus) != string::npos || currentThing.find(minus) != string::npos|| currentThing.find(times) != string::npos || currentThing.find(divide) != string::npos  )
        {

            returnThis[d] = currSpot;
            currSpot = "";
            d ++;
            returnThis[d] = currentThing;
            d++;
        }
        else
        {

         currSpot = currSpot.append(currentThing);   
          
        }
        
        
        //returnThis[i] = fullString[i];
    }
      returnThis[d] = currSpot;
            currSpot = "";
            d ++;

    // returnThis[0]="hello";
    // returnThis[1]="world";



    return   returnThis;
    

}


void StringFunctions::display(std::string * input)
{
    int i =0;
    //cout<<"test";
    while(input[i] != "" )
    {
        //cout<<"running";
        cout<<input[i] << "\n";
        i++;
    }
    
    
}
