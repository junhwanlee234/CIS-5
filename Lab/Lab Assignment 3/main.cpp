/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 *
 * Created on March 25, 2019, 6:14 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float gallon,stax,federaltax,totaltax,profit,percentage;
    
    
    cout<<"Calculate the percentage Gas Tax on a gallon of gas \nand the profit made from a gallon of gas given"<<endl;
    cout<<"Input the amount it cost you per gallon the last time you put gas in your car."<<endl;
    cin>>gallon;
    
    stax = gallon*.08;
    federaltax = 0.184;
    totaltax = .39+.10+stax+federaltax;
    profit = gallon*0.065;
    percentage = (totaltax/gallon)*100;
    cout<<"The percentage and the dollar amount of profit gas companies make are"<<endl;
    cout<<"6.5% "<< profit<<"$"<<endl;
    cout<<"The percentage and the dollar amount of taxes to the Govt are"<<endl;
    cout<<percentage<<"% "<<totaltax<<"$";
   
    
    
    
    
    
    return 0;
}

