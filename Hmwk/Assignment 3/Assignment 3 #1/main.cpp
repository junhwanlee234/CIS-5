/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 19, 2019, 1:25 PM
 */
//System Libraries
#include <iostream>
#include <string>
#include <iomanip>  
using namespace std;

int main(int argc, char** argv) {
    string name1;
    string name2;
    string name3;
    double time1, time2, time3;
    //Set the random number seed
    
    //Declare Variables
    
    cout<< "Race Ranking Program"<<endl;
    cout<< "Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    
    cin>> name1>> time1;
    cin>> name2>> time2;
    cin>> name3>> time3;//Initialize or input i.e. set variable values
    

    
        if (time1 < time2 && time1 < time3)
        {
            if (time2 > time3)
            {
                cout<< name1<< "\t"<<right<<setw(3)<<time1<<endl;
                cout<< name3<<"\t"<<right<<setw(3)<< time3<<endl;
                cout<< name2<<"\t"<<right<<setw(3)<< time2;
            }
            else
            {
                cout<< name1<<"\t"<<right<<setw(3)<< time1<<endl;
                cout<< name2<<"\t"<<right<<setw(3)<< time2<<endl;
                cout<< name3<<"\t"<<right<<setw(3)<< time3;
            }
        }
        if (time2 < time1 && time2 < time3)
        {
            if(time1>time3)
            {
                cout<< name2<<"\t"<<right<<setw(3)<< time2<<endl;
                cout<< name3<<"\t"<<right<<setw(3)<< time3<<endl;
                cout<< name1<<"\t"<<right<<setw(3)<< time1;
            }
            else{
                cout<< name2<<"\t"<<right<<setw(3)<<time2<<endl;
                cout<< name1<<"\t"<<right<<setw(3)<< time1<<endl;
                cout<< name3<<"\t"<<right<<setw(3)<< time3;
            }
        }
        if (time3 < time1 && time3< time2){
            if (time1>time2){
                cout<< name3<<"\t"<<right<<setw(3)<< time3<<endl;
                cout<< name2<<"\t"<<right<<setw(3)<< time2<<endl;
                cout<< name1<<"\t"<<right<<setw(3)<< time1;
            }
            else{
                cout<< name3<<"\t"<<right<<setw(3)<< time3<<endl;
                cout<< name1<<"\t"<<right<<setw(3)<< time1<<endl;
                cout<< name2<<"\t"<<right<<setw(3)<< time2;
            }
        }
   
        
    
    //Map inputs -> outputs
    
     //Display the outputs

    //Exit stage right or left!
    return 0;
}