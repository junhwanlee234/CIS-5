/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 7, 2019, 10:41 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    float c1, c2, f;//Declare Variables
    
    cout<< "Temperature Converter"<<endl;
    cout<< "Input Degrees Fahrenheit"<<endl;
    cin>>f;//Initialize or input i.e. set variable values
    c1=f-32;
    c2= (5*c1)/9;
    cout<<fixed<<setprecision(1)<< f<<" Degrees Fahrenheit = "<<c2<< " Degrees Centigrade";//Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}