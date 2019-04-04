/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 31, 2019, 11:32 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    
   //Set the random number seed
    int number;
    cin>>number;
    //Declare Variables
    
    std::string str = "+";
    
    
    
     for(int i=1;i<=number;++i)
     {
        for(int j=1;j<= i;++j){
            cout<<str;
        }
      
     cout<<endl;
     cout<<endl;
     }
    for(int i=number;i>= 1;--i)
     {
        for(int j=1;j<= i;++j){
            cout<<str;
        }
        cout<<endl;
        cout<<endl;
              
    }
     
     
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}