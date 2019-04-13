/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Purpose : Going to Boston Dice Game
 * Created on April 12, 2019, 12:29 AM
 */
#include<iostream> //Input/output library
#include <ctime> // Time functions library
#include <iomanip> //Input/output library
#include <string> //General string library
#include <cstdlib> //Input/output library
#include <fstream> // File operations library

using namespace std;
 //User Libraries

 //Global Constants
 //Math, Physics, Science, Conversions, 2-D Array Columns

 //Function Prototypes

 //Execution Begins Here!
int main ()
{
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0))); 
    //Declare Variables 
    string player1,player2;
    int arr1[3],arr2[3]; // declare two different arrays for two players
    int i,k; //Declare two counters
    float max1 ,max2; //Declare largest numbers for dices
    float p1_sum = 0;
    float p2_sum = 0; //Declare two number
    int round_number,a=0; // Declare number of rounds and counter for rounds
    int score1=0,score2=0; //Declare two scores for two players
    //Display output
    cout<<"Welcome to a game of Going to Boston Dice Game"<<endl;//Basic introduction
    cout<<"Please enter the number of rounds (upto 10 rounds)"<<endl;//Instruction for player
    //Input Value
    cin>>round_number; //Insert number of rounds
 
    while(round_number >10) //Input validation
    {
        //Display output
        cout<<"error please input another value"<<endl;
        cout<<endl;
        cin>>round_number; //Input another value
    }
    //If the input is valid proceed to the program below
    
    //Display output
    cout <<"Player 1"; 
    cout <<setw(53)<<"Player 2"<<endl;
    
    do{ //start do-while loop
        
    int n=3; //represents number of dices
    for (int round = 0; round < 3; round++) // start a for-loop for rounds
    {
       
        cout <<"Numbers on dice(s) = " ; //Display output
        for (i = 0; i < n; i++) //start a for-loop for random dice number generator
        {
            arr1[i] = (rand()%6)+1; //generate random numbers for player 1 array
            cout<<arr1[i]<<" "; //Display numbers in array
        }
        cout<<setw(53-(2*n)); //Display format purpose
        cout<<"Numbers on dice(s) = "; //Display output
        for (k=0; k <n; k++) //start a for-loop for random dice number generators
        {
            arr2[k] = (rand()%6) +1; //generate random numbers for player 2 array
            cout<<arr2[k]<<" "; //Display numbers in array
        }
        cout<<endl; //Display format purpose
        max1 = arr1[0]; // Declare largest number for player 1
        max2 = arr2[0]; // Declare largest number for player 2
        for (i = 0; i < n; i++) // start a for-loop to execute each number to find the largest number
        {
            if (max1 < arr1[i]) // condition for largest number
                max1 = arr1[i]; // Declare largest number
        }
        for (k = 0; k< n; k++) // start a for-loop to execute each number to find the largest number
        {
            if (max2 < arr2[k]) // condition for largest number
            max2 = arr2[k]; // Declare largest number
        }
        
        //Display outputs
        cout << "Largest number : " << max1; 
        cout<<setw(52)<<"Largest number : "<<max2<<endl;
        p1_sum +=max1; //the sum of all the largest numbers for player 1
        p2_sum +=max2; //the sum of all the largest numbers for player 2
        n--; //decrement of number of dices in each loop
    }
    
    //Display output
    cout<< "round sum = "<<p1_sum; //Display each round's sum
    cout<<setw(51)<< "round sum = "<<p2_sum<<endl; //Display each round's sum
    
    if (p1_sum > p2_sum) // Determine the winner of the round
    {
        cout<<endl; //Display format purpose
        cout<<"Player 1 wins the round"<<endl; // Display output
        score1=score1+1; //generate 1 score upon winning
    }
    else if (p2_sum>p1_sum) //Determine the winner of the round
    {
        cout<<endl; //Display format purpose
        cout<<"Player 2 wins the round"<<endl; //Display output
        score2=score2+1; //generate 1 score upon winning
    }
    else{ //Determine the winner of the round
        cout<<"draw"<<endl; //Display output
        //no score for both players upon draw
    }
    cout<<endl; //Display format purpose
    
    //Variables reset for the next loop
    max1=0; //Reset the largest number for player 1
    max2=0; //Reset the largest number for player 2
    p1_sum=0; //Reset the sum of largest number for player 1
    p2_sum=0; //Reset the sum of largest number for player 2
    a++; //Increment of number of rounds
    } 
    while(a<round_number); // expression to repeat the loop
    // if the condition does not reach the number of rounds to loop restarts
    // until it reaches the number of rounds put in by players
    
    //Display output
    cout<<"Player 1 scored = "<<score1<<setw(52)<<"Player 2 scored = "<<score2<<endl; //Score board
    if (score1 > score2) //Determine the winner of the game
    {
        cout<<setw(47)<<"Player 1 wins the game"<<endl;//Display winner
    }
    if (score2 > score1) //Determine the winner of the game
    {
        cout<<setw(47)<<"Player 2 wins the game"<<endl; //Display winner
    }
    if (score2 == score1) //Determine the winner of the game
    {
        cout<<setw(40)<<"draw"<<endl; //Display draw
    }
    cout<<setw(45)<<"end of the game"<<endl; //Messages the end of the game
    cout<<"Restart to play a new game"<<endl;
    
    //Exit
    return 0;
    //Execute the program
}