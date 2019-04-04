/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Lab 1
 * Created on February 28, 2019, 9:36 PM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float milBdgt,fedBdgt,result,percentage;
    cout<<"This program calculates the military budget"<<endl;
    cout<<"as a percentage of the federal budget"<<endl;
    cout<<"Military budget = $700 billion"<<endl;
    cout<<"Federal budget = $4.1 trillion"<<endl;
    milBdgt=7.0e11f;
    fedBdgt=4.1e12f;
    result=milBdgt/fedBdgt;
    percentage=result*100;
    cout<<"The percentage of the militar budget of the federal budget is"<<endl;
    cout<<percentage<<"%"<<endl;
    return 0;
}

