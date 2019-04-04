/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 19, 2019, 3:44 PM
 */

#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv) 
{
    float checks,checkfees ,balance,lowbalance,newbalance;
    float fees = 0;
    float monthlyfee = 10;
    cout<< "Monthly Bank Fees"<<endl;
    cout<< "Input Current Bank Balance and Number of Checks"<<endl;
    cin>>balance>>checks;
    
    

    

    if(balance < 400){
        fees = fees + 15;
        lowbalance= 15;
    }
    else{
        fees = fees + 0;
        lowbalance = 0;
    }

    if(checks < 20) 
    {
        checkfees= 0.1*checks;
        fees = fees + checkfees;
        newbalance = balance - (monthlyfee+lowbalance + checkfees);
    } 
    else if(checks < 40)
    {
        checkfees = 0.08*checks;
        fees = fees + checkfees;
        newbalance = balance - (monthlyfee+lowbalance + checkfees);
    } 
    else if(checks < 60)
    {
        checkfees=0.06*checks;
        fees = fees + checkfees;
        newbalance = balance - (monthlyfee+lowbalance + checkfees);
    } 
    else 
    {
        checkfees = .04*checks;
        fees = fees + checkfees;
        newbalance = balance - (monthlyfee+lowbalance + checkfees);
    }
    
    
    cout<< "Balance"<< setw(6)<<"$"<<setw(9)<<setprecision(2)<<fixed<<showpoint<<balance<<endl;
    cout<< "Check Fee"<< setw(4)<<"$"<<setw(9)<<setprecision(2)<<fixed<<checkfees<<endl;
    cout<< "Monthly Fee"<< setw(2)<<"$"<<setw(9)<<setprecision(2)<<fixed<<monthlyfee<<endl;
    cout<< "Low Balance"<< setw(2)<<"$"<<setw(9)<<setprecision(2)<<fixed<<lowbalance<<endl;
    cout<< "New Balance"<< setw(2)<< "$"<<setw(9)<<setprecision(2)<<fixed<<newbalance;
    

  return 0;
}
    
    