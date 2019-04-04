/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Homework: Gaddis Ch2 #19 "Annual High Temperatures"
 * Created on February 26, 2019, 7:09 PM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double NYC, Denver, Pheonix, percentage;
    double NYC2, Denver2, Pheonix2, percentage2;
    NYC=85;
    Denver=88;
    Pheonix=106;
    
    cout<<"This program calculates the average July high temperatures"<<endl;
    cout<<"In New York City, Denver, and Pheonix after the temperature rises"<<endl;
    cout<<"Input the percentage rise"<<endl;
    cin>>percentage;
    
    percentage2 = percentage/100;
    NYC2= NYC*percentage2+NYC;
    Denver2 =Denver*percentage2+Denver;
    Pheonix2 =Pheonix*percentage2+Pheonix;
    
    cout<<"The new average high temperatures of these cities are "<<endl;
    cout<< "New York City = "<< NYC2<<" Fahrenheit"<< endl;
    cout<< "Denver = "<< Denver2<<" Fahrenheit"<< endl;
    cout<< "Pheonix = "<< Pheonix2<< " Fahrenheit"<<endl;
    
    
            
            
    
    return 0;
}

