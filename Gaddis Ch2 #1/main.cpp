/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Homework: Gaddis Ch2 #1 "Sum of Two Numbers"
 * Created on February 25, 2019, 5:30 PM
 */
//This program demonstrates an addition of two numbers.
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    short op1, op2, op3;
    cout<< "This program calculates a sum of two integers"<<endl;
    cout<< "Input two integers"<<endl;
    cin>>op1>>op2;
    op3=op1+op2;
    cout<<"The sum of these two integers is "<<endl;
    cout<<op3;
    
            
           
    return 0;
   
}

