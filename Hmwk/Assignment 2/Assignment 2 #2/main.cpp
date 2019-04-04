/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 7, 2019, 10:38 PM
 */

//System Libraries
#include <iomanip>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
     //Set the random number seed
    
    float op1,op2,op3,op4,op5,average;//Declare Variables
    
    cout<< "Input 5 numbers to average."<<endl;
    cin>>op1 >> op2>> op3>> op4>> op5;//Initialize or input i.e. set variable values
    average = (op1+op2+op3+op4+op5)/5 ;
    
    //Map inputs -> outputs
    
    cout<<fixed << setprecision(1)<< "The average = "<< average;//Display the outputs

    //Exit stage right or left!
    return 0;
}