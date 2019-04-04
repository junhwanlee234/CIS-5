/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Homework: Gaddis Ch2 #12 "Land Calculation"
 * Created on February 26, 2019, 6:48 PM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double acre, land;
    
    
    cout<< "This program calculates the number of acres in square feet land"<<endl;
    cout<< "Input the area of the land in square feet"<<endl;
    cin>>land;
    acre = land/43560;
    cout<< "The number of acres is/are "<<endl;
    cout<< acre;
           
    
    
    
    
    return 0;
}

