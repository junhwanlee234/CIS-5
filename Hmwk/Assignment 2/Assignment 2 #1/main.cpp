/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Assignment 2 #1 "Paycheck"
 * Created on March 6, 2019, 11:37 PM
 */

//System Libraries
#include <iostream>
#include <iomanip> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    
    //Set the random number seed
    
    float hourlyrate,hours,grosspay;//Declare Variables
    cout<< "This program calculates the gross paycheck."<<endl;
    cout<< "Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>hourlyrate>>hours;
    if (hours <= 40)
    {
        grosspay = hours * hourlyrate;
    }

    else
    {
        grosspay = (40*hourlyrate)+((hours-40)*hourlyrate*2);
    }//Initialize or input i.e. set variable values
    
    
    //Map inputs -> outputs
    
    cout<<"Paycheck = $";
    std::cout << std::setw(7);
    std::cout << fixed<<setprecision(2)<< grosspay;//Display the outputs

    //Exit stage right or left!
    return 0;
}