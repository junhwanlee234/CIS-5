/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 7, 2019, 10:42 PM
 */

//System Libraries
#include <iostream>
#include <stdio.h>      /* printf */
#include <math.h> 
#include <iomanip>

//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    float d,r,s,c,t;//Declare Variables
    
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;//Initialize or input i.e. set variable values
    cin>>d;
    r=(d*3.14159265)/180;
    s=sin(r);
    c=cos(r);
    t=tan(r);
    
    //Map inputs -> outputs
    
    
    cout <<fixed<< setprecision(0)<< "sin("<<d<<") = " << setprecision(4)<<s<<endl;
    cout <<fixed<< setprecision(0)<< "cos("<<d<<") = " << setprecision(4)<<c<<endl;
    cout <<fixed<< setprecision(0)<< "tan("<<d<<") = " << setprecision(4)<<t;
    
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}