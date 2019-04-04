/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 31, 2019, 11:56 PM
 */

#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int n;
    cin>>n;
    int largest = n;
    int smallest = n;
    
    
    while(1){
        cin>>n;
        if(n==-99)
        {
            break;
        }
        else if(n < smallest)
        {
            smallest = n;
        }
        else if(n > largest)
        {
            largest = n;
        }
    }
    
    cout<<"Smallest number in the series is "<<smallest<<endl;
    cout<<"Largest  number in the series is "<<largest;//Set the random number seed
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
