/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 19, 2019, 5:24 PM
 */

#include <iostream>
#include <set>
#include <algorithm>
using namespace std; 


int main(int argc, char** argv) 
{
    string name1,name2,name3;
    int a;
    name1.assign(a,0);
    name2.assign(a,0);
    name3.assign(a,0);
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1;
    cin>>name2;
    cin>>name3;
    
    if(name1<name2 && name1<name3){
        if(name2<name3){
            cout<<name1<<endl;
            cout<<name2<<endl;
            cout<<name3;
        }
        else{
            cout<<name1<<endl;
            cout<<name3<<endl;
            cout<<name2;
        }
        
    }
    else if (name2<name1 && name2<name3){
        if(name1<name3){
            cout<<name2<<endl;
            cout<<name1<<endl;
            cout<<name3;
        }
        else{
            cout<<name2<<endl;
            cout<<name3<<endl;
            cout<<name1;
        }
     
    }
    else{
        if(name1<name2){
            cout<<name3<<endl;
            cout<<name1<<endl;
            cout<<name2;
        }
        else{
            cout<<name3<<endl;
            cout<<name2<<endl;
            cout<<name1;
        }
    }
   
    return 0;
}