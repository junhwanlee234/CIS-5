/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 7, 2019, 10:45 PM
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
    
    float capacity, peoplenumber, result;//Declare Variables
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>> capacity>>peoplenumber;
    if (capacity < peoplenumber){
        result = peoplenumber - capacity;
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<< result<<" to avoid fire violation.";
    }
    else{
        result = capacity - peoplenumber;
        cout<<"Meeting can be held."<<endl;
        cout<<"Increase number of people by "<<result<<" will be allowed without violation.";
    }
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}