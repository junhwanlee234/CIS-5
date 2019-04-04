/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 7, 2019, 10:43 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    const float dietsoda = 0.001;
    float sm,wm,sd,wd,wdg,cans,result;//Declare Variables
    sm= 5;
    wm=35;
   
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>wd;
    wdg =wd*(45359.2/100);//Initialize or input i.e. set variable values
    sd = (sm/wm)*wdg;
    cans = sd/(350*dietsoda);
    result = trunc(cans);
    
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<< "which can be consumed is "<<result<<" cans";
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}