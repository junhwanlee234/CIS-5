/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Homework: Gaddis Ch2 #6 "Annual Pay"
 * Created on February 26, 2019, 6:29 PM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double payAmount, payPeriods, annualPay;
    cout<< "This program calculates the annual pay for each worker"<<endl;
    cout<< "Input pay amount in each pay period for a single worker in $"<<endl;
    cin>>payAmount;
    cout<< "Input the number of pay periods in one year"<<endl;
    cin>>payPeriods;
   
   
    
    annualPay = payAmount*payPeriods;
    cout << "The annual pay for each worker is $"<< annualPay<<endl;
           
    return 0;
}

