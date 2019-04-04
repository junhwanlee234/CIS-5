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
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Set the random number seed
    
    float oldannual,Rpay, newannual, newmonthly;//Declare Variables
    cout<<"Input previous annual salary."<<endl;
    cin>>oldannual;
    
    Rpay = (oldannual/2)*0.076;
    newannual = oldannual + 2*Rpay;
    newmonthly = newannual/12;
    //Initialize or input i.e. set variable values
    
    cout<< "Retroactive pay    = $";
    std::cout<<std::setw(7);
    std::cout<<fixed<<setprecision(2)<<Rpay<<endl;
    cout<< "New annual salary  = $";
    std::cout<<std::setw(7);
    std::cout<<fixed<<setprecision(2)<<newannual<<endl;
    cout<< "New monthly salary = $";
    std::cout<<std::setw(7);
    std::cout<<fixed<<setprecision(2)<<newmonthly;
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}