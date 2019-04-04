/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Homework: Gaddis ch2 #3 "Sales Tax"
 * Created on February 26, 2019, 1:11 PM
 */

#include <iostream>
using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    float op1,op2,op3;            
    float result;
    // op1 = sales
    // op2 = state sales tax
    // op3 = county sales tax
    cout<< "This program calculates the total sales tax on a single purchase"<<endl;
    cout<< "calculate sales tax in $"<<endl;
    
    cout<< "Input the price of the purchase"<<endl;
    cin>> op1;
    op2 = op1*0.04;
    op3 = op1*0.02;
    result = op2+op3;
    cout<< "State Sales Tax = $"<< op2<<endl;
    
    cout<< "County Sales Tax = $"<< op3<< endl;
    
    cout<< "the total sales tax = $"<< result<<endl;
    
    
    return 0;
}

