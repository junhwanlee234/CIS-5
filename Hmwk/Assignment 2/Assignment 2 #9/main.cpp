/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 7, 2019, 10:45 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>

//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!

int main (int argc, char** argv)
{

float number, negative_sum=0, positive_sum=0, sum=0;
int count=0, positiveCount=0, negativeCount=0; 
cout << "Input 10 numbers, any order, positive or negative\n";

for(int i=0;i<10;i++)
 {

 //cout<<"i is"<<i<<endl;
cin >> number;

if (number > 0 )
 {
     positive_sum += number;
     positiveCount++;  count++;
     
 } 

 else     
 {
     negative_sum += number ;
     negativeCount++; count++;
     
 }  
 }
 sum = negative_sum + positive_sum;

 
 cout << "Negative sum =";
 std::cout << std::setw(4);
 std::cout << negative_sum<<std::endl;
 
 cout << "Positive sum =";
 std::cout << std::setw(4);
 std::cout << positive_sum<<std::endl;
 
 cout << "Total sum    =";
 std::cout << std::setw(4);
 std::cout << sum;
 
 return 0;
 }