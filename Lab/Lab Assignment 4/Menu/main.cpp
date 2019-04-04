/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Created on March 21st, 2019, 10:36 AM
 * Purpose:  Menu Template
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath> 
#include <iomanip>
#include <string>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice,nProbs;
    
    //Initialize or input i.e. set variable values
    nProbs='8';
    do{
        //Present the menu to the user.
        cout<<"Choose from the following Menu"<<endl<<endl;
        cout<<"1 Race"<<endl;
        cout<<"2 Bankcharges"<<endl;
        cout<<"3 Books"<<endl;
        cout<<"4 SortNames"<<endl;
        cout<<"5 RockPaperScissors"<<endl;
        cout<<"6 CompatibleSigns"<<endl;
        cout<<"7 Roman Conversion"<<endl;
        cout<<"8 ISP"<<endl;
        cout<<endl;
        cin>>choice;
        cout<<endl;
        //Select the problem to execute
        switch(choice){
            case '1':{
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
            
                break;
            }
            case '2':{
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
                break;
            }
            case '3':{
                float books,points;//Set the random number seed
    
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>books;
    //Declare Variables
    
    if(books< 1){
        points = 0;
    }
    else if(books<2){
        points = 5;
    }
    else if (books<3){
        points = 15;
    }
    else if (books<4){
        points = 30;
    }
    else{
        points = 60;
    }
    
    cout<<"Books purchased ="<<setw(3)<<books<<endl;
    cout<< "Points earned   ="<<setw(3)<<points;
                break;
            }
            case '4':{
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
    break;
            }
                
            
            case '5':{
                char Player1, Player2, ans;

  
   cout << "Rock Paper Scissors Game"<<endl;
   cout << "Input Player 1 and Player 2 Choices"<<endl;
   cin >> Player1>>Player2;
  
       
       if ((Player1 =='R' ||Player1== 'r') && (Player2 =='S' || Player2=='s'))
       {
           cout << "Rock breaks scissors.";
       }
       
       else if ((Player1 =='S' ||Player1=='s') && (Player2 =='R' ||Player2=='r'))
       {
           cout << "Rock breaks scissors.";
       }
       
       else if ((Player1 =='P' ||Player1== 'p') && (Player2 =='R' || Player2=='r'))
       {
           cout << "Paper covers rock.";
       }
       
       else if ((Player1 =='R' ||Player1=='r') && (Player2 =='P' ||Player2=='p'))
       {
           cout << "Paper covers rock.";
       }
       //checking if player1 wins the game
       else if ((Player1 == 'S' ||Player1== 's') && (Player2 =='P' ||Player2=='p'))
       {
           cout << "Scissors cuts paper.";
       }
       //checking if player2 wins the game
       else if ((Player1 =='P' || Player1=='p') && (Player2 =='S' || Player2=='s'))
       {
           cout << "Scissors cuts paper.";
       }
       //checking if game is draw
       else if ((Player1 =='R' ||Player2== 'r') ||
           (Player1 =='S' ||Player2== 's')||
           (Player1 =='S' ||Player2== 's')
           )
       {
           //print its draw
           cout << "Nobody wins.";
       }
   break;
            }
            
            case '6':{
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
    break;
            }
            
            case '7':{
                srand(static_cast<unsigned int>(time(0)));

                //Declare Variables
                int decimal;  //Decimal value between (1000-3000)
                string rmNum; //Roman numeral representation

                //Initialize or input i.e. set variable values
                rmNum="";
                decimal=rand()%2001+1000;//Range 1000 - 3000

                //Map inputs -> outputs
                if(decimal<1000||decimal>3000){
                    cout<<"Dr. Lehr doesn't know what he is doing"<<endl;
                }else{
                    //Determine number of 1000's
                    switch(decimal/1000%10){
                        case 3:rmNum+='M';
                        case 2:rmNum+='M';
                        case 1:rmNum+='M';
                    }
                    //Determine number of 100's
                    switch(decimal/100%10){
                        case 9:rmNum+="CM";break;
                        case 8:rmNum+="DCCC";break;
                        case 7:rmNum+="DCC";break;
                        case 6:rmNum+="DC";break;
                        case 5:rmNum+='D';break;
                        case 4:rmNum+="CD";break;
                        case 3:rmNum+='C';
                        case 2:rmNum+='C';
                        case 1:rmNum+='C';
                    }
                    //Determine number of 10's
                    switch(decimal/10%10){
                        case 9:rmNum+="XC";break;
                        case 8:rmNum+="LXXX";break;
                        case 7:rmNum+="LXX";break;
                        case 6:rmNum+="LX";break;
                        case 5:rmNum+='L';break;
                        case 4:rmNum+="XL";break;
                        case 3:rmNum+='X';
                        case 2:rmNum+='X';
                        case 1:rmNum+='X';
                    }
                    //Determine number of 10's
                    switch(decimal%10){
                        case 9:rmNum+="IX";break;
                        case 8:rmNum+="VIII";break;
                        case 7:rmNum+="VII";break;
                        case 6:rmNum+="VI";break;
                        case 5:rmNum+='V';break;
                        case 4:rmNum+="IV";break;
                        case 3:rmNum+='I';
                        case 2:rmNum+='I';
                        case 1:rmNum+='I';
                    }
                }

                //Display the outputs
                cout<<decimal<<" = "<<rmNum<<endl<<endl;
                break;
            }
            
            case '8':{
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
                break;
            }
            
            
            
            
            
            
            
            
            default:
                cout<<"Exiting Menu"<<endl<<endl;
        }
    }while(choice<=nProbs);

    //Exit stage right or left!
    return 0;
}