/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Homework: Gaddis Ch2 #10 "Miles per Gallon"
 * Created on February 26, 2019, 6:36 PM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double gas, miles, MPG;
    
    cout<< "This program calculates MPG"<<endl;
    cout<< "Input gallons of gasoline"<<endl;
    cin>>gas;
    cout<< "Input miles the car driven before refueling"<<endl;
    cin>>miles;
    
    MPG = miles/gas;
    
    cout<< "Miles driven per gallons of gas used is "<<endl;
    cout<< MPG<<endl;
    
            
    return 0;
}

