/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 19, 2019, 10:26 PM
 */

#include <iostream>
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float books,points;//Set the random number seed
    
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>books;
    //Declare Variables
    
    if(books< 1){
        points = 0;
    }
    else if(books<2){
        points = 5;
    }
    else if (books<3){
        points = 15;
    }
    else if (books<4){
        points = 30;
    }
    else{
        points = 60;
    }
    
    cout<<"Books purchased ="<<setw(3)<<books<<endl;
    cout<< "Points earned   ="<<setw(3)<<points;
        
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}