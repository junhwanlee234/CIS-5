/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Homework: Gaddis Ch2 #5 "Average of Values"
 * Created on February 26, 2019, 3:08 PM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    unsigned short op1, op2, op3, op4, op5, sum;
    float average;
     
    
  
    op1= 28;
    op2 = 32;
    op3 = 37;
    op4 = 24;
    op5 = 33;
    
    sum = op1+op2+op3+op4+op5;
    average = sum/5;
    
   
    
    cout << average<<endl;
    return 0;
}

