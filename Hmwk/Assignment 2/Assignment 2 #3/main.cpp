/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 7, 2019, 10:39 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    float cookies, cal;//Declare Variables
    
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;//Initialize or input i.e. set variable values
    cin>>cookies;
    cal = (300/4)*cookies;
    cout<<"You consumed "<<cal<<" calories.";//Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}