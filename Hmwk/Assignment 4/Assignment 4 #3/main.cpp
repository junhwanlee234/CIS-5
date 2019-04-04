/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 31, 2019, 11:56 PM
 */

//System Libraries
#include <iostream> 
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!

double amount()
{
	double new_num = 0.02;
	double new_store = 0.03;
	int num;
	cin >> num;
	if (num < 1)
	{
	    return 0;
	}
	else if (num == 1)
	{
	    return 0.01;
	}
	else if (num == 2)
	{
	    return 0.03;
	}
	else
	{

		for (int count = 2; count < num; count++)
		{
		    
			new_num *= 2.00;
			
			new_store += new_num;

		}

	}


	return new_store;


}


int main()
{

	std::cout << "Pay = $" << std::fixed << std::setprecision(2) << amount();
    return 0;
}
