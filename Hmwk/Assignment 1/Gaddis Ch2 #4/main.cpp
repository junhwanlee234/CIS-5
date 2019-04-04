/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Homework: Gaddis ch2 #4 "Restaurant Bill"
 * Created on February 26, 2019, 1:41 PM
 */

#include <iostream>
using namespace std; 
/*
 * 
 */
int main(int argc, char** argv) {
    float op1, op2, op3, op4, op5;
    cout<< "This program creates a restaurant bill which contains a list of:"<<endl;
    cout<< "meal cost, tax amount, tip amount, and total bill"<<endl;
    // op1 = meal charge
    // op2 = tax
    // op3 = tip
    // op4 = total bill
    cout<< "Final Bill"<<endl;
    op1 = 88.67;
    op2 = op1*0.0675;
    op5 = op1+op2;
    op3 = op5*0.20;
    op4 = op1+op2+op3;
    cout<< "meal cost = $"<< op1<< endl;
    cout<< "tax amount = $"<< op2<<endl;
    cout<< "tip amount = $"<< op3<<endl;
    cout<< "total bill = $"<< op4<<endl;
    return 0;
}

