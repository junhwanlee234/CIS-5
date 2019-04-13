/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Purpose : Player 1 3 rounds
 * Created on April 11, 2019, 9:17 PM
 */

#include<iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main ()
{
    
    
    int arr1[3],arr2[3], i,k, max1,max2,p1_sum,p2_sum;
    int round;
    cout <<"Player 1";
    cout <<setw(53)<<"Player 2"<<endl;
    
    srand(time(0));
    
    
    for (round = 0; round < 3; round++){
    cout <<"Numbers on dice(s) = " ; 
    int n=3;
    for (i = 0; i < n; i++){
        arr1[i] = (rand()%6)+1;
        cout<<arr1[i]<<" ";
        
    }
    cout<<setw(53-(2*n));
    cout<<"Numbers on dice(s) = ";
    for (k=0; k <n; k++){
        arr2[k] = (rand()%6) +1;
        cout<<arr2[k]<<" ";
    }
    cout<<endl;
    
    max1 = arr1[0];
    max2 = arr2[0];
    for (i = 0; i < n; i++)
    {
        if (max1 < arr1[i])
            max1 = arr1[i];
    }
    
    
    for (k = 0; k< n; k++){
        if (max2 < arr2[k])
            max2 = arr2[k];
    }
        
    
    cout << "Largest number : " << max1;
    cout<<setw(52)<<"Largest number : "<<max2<<endl;
    p1_sum +=max1;
    p2_sum +=max2;
    n--;
    }
    cout<< "round sum = "<<p1_sum;
    cout<<setw(51)<< "round sum = "<<p2_sum;
    
    
    
    
    return 0;
}


