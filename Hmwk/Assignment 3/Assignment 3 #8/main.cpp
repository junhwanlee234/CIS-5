/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 19, 2019, 10:28 PM
 */

#include <iostream>
#include <string>
using namespace std;



int main(int argc, char** argv){
 string package;
 float hours;
 float price;
 cout << "ISP Bill"<<endl;
 cout << "Input Package and Hours"<<endl;
 cin >> package>>hours;

 if ((package == "A") || (package == "B") || (package == "C")) {
 
 
 if (hours <= 744) 
 {

    if (package == "A") 
    {
        if (hours> 10) 
    {
        price = 9.95 + (hours - 10) * 2;
    } 
    else 
    {
        price = 9.95;
    }

    } 
else if (package == "B") 
    {
        if (hours> 20) 
        {
            price = 14.95 + (hours - 20) * 1;
        }       
        else 
        {
        price = 14.95;
        }

    } 
    else 
    {
        price = 19.95;
    }
    } 
    else 
        {
            cout << "Invalid number of hours!";
        }
        } 
    else 
    {
        cout << "Invalid package!";
    }
        cout << "Bill = $ " << price;
} 