/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 19, 2019, 8:32 PM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    char Aries, Leo, Sagittarius;
    char Taurus, Virgo, Capricorn;
    char Gemini, Libra, Aquarius;
    char Cancer, Scorpio, Pisces;
    string h1, h2;//Set the random number seed
    
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>h1>>h2;
    
    if(h1=="Taurus" || h1== "Capricorn" || h1== "Virgo")
    {
        if(h2=="Virgo" || h2 == "Capricorn" || h2=="Taurus")
        {
            cout<< h1<<" and "<<h2<<" are compatible Earth signs.";
        }
        else{
            cout<<h1<<" and "<<h2<<" are not compatible signs.";
        }
    }
    else if(h1=="Gemini" || h1=="Libra" || h1=="Aquarius"){ 
        if(h2=="Gemini" || h2=="Libra" || h2=="Aquarius"){
            cout<< h1<<" and "<<h2<<" are compatible Air signs.";
        }
        else{
            cout<<h1<<" and "<<h2<<" are not compatible signs.";
        }
    }
    else if(h1=="Cancer" || h1=="Scorpio" || h1=="Pisces"){
        if(h2=="Cancer" || h2=="Scorpio" || h2=="Pisces"){
            cout<< h1<<" and "<<h2<<" are compatible Water signs.";
        }
        else{
            cout<<h1<<" and "<<h2<<" are not compatible signs.";
        }
    }
    else{
        if(h2=="Aries" ||h2=="Leo" || h2=="Sagittarius"){
            cout<< h1<<" and "<<h2<<" are compatible Fire signs.";
        }
        else
        {
            cout<<h1<<" and "<<h2<<" are not compatible signs.";
        }
    }
        
    
    
        
        return 0;
}