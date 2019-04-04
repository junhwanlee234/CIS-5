/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 7, 2019, 10:40 PM
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
    
    float replacementC, insurance;//Declare Variables
    
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;//Initialize or input i.e. set variable values
    cin>>replacementC;
    insurance = 0.8 * replacementC;
    cout<<"You need $"<< insurance<< " of insurance.";
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}