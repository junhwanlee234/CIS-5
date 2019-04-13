/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Purpose: Random dice
 * Created on April 11, 2019, 3:06 AM
 */

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int max=6, random_number1, random_number2,random_number3;
    int largest;
    cout<<"Roll the dice"<<endl;
    
    srand(time(0));
    random_number1=(rand()% max) + 1;
    random_number2=(rand()% max) + 1;
    random_number3=(rand()% max) + 1;
    cout<<random_number1<<" "<<random_number2<<" "<<random_number3<<endl;
    
    if(random_number1>(random_number2 || random_number3)){
        random_number1=largest;
    }
    else if (random_number2>(random_number1 || random_number3)){
        random_number2=largest;
        
    }
    else if (random_number3>(random_number2|| random_number1)){
        random_number3=largest;
        
    }
    else{
        random_number1=largest;
        
    }
    cout<<"largest = "<<largest;
    
    return 0;
}

