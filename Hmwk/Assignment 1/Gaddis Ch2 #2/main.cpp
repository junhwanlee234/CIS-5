/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Homework: Gaddis ch2 #2 "Sales Prediction"
 * Created on February 26, 2019, 12:55 PM
 */

#include <iostream>
using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    float op1, result;
    cout << "This program predicts annual sales from sales division" <<endl;
    cout << "input annual sales in million $" <<endl;
    cin >>op1>>result;
    
    result = 0.58 * op1;
    cout << "annual sales from sales division is"<< endl;
    cout << result <<endl;
            
    return 0;        
            
}            
            
            
            
   
    
        
     


