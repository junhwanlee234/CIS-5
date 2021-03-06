/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Junhwan Lee
 * Purpose: Going to Boston final V2
 * Created on May 27th , 2019, 11:16 AM
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

//Function prototypes
int input_valid(int); //input validation declared
void Players(string,string); //display basic format
int player1_dice(int,int); //function to roll dice
int player2_dice(int,int); //function to roll dice

//Begin input validation
int input_valid(int numb){ 
    int new_numb; //new number to return
    if(numb>10) //validate input
    {
        cout<<"error please input another value"<<endl;
        cin>>new_numb;
    }
    else{
        numb=new_numb;
    }
    return new_numb; // new round_number
} 
 
void Players(string player1, string player2){
    cout <<player1; //display string
    cout <<setw(53)<<player2<<endl; //display string with format
} 

int player1_dice(int array[],int i){ //rolls dice for player 1
    int n=3;
    for (i = 0; i < n; i++) //start a for-loop for random dice number generator
        {
            array[i] = (rand()%6)+1; //generate random numbers for player 1 array
            cout<<array[i]<<" "; //Display numbers in array
        }
    return array[i];
}

int player2_dice(int array[], int k){ //rolls dice for player 2
    int n=3;
    for (k=0; k <n; k++) //start a for-loop for random dice number generators
        {
            array[k] = (rand()%6) +1; //generate random numbers for player 2 array
            cout<<array[k]<<" "; //Display numbers in array
            
        }
    return array[k];
}



//main begins here
int main ()
{
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0))); 
    //Declare Variables 
    string player1 = "Player 1";
    string player2 = "Player 2";
    int arr1[3],arr2[3]; // declare two different arrays for two players
    int i,k; //Declare two counters
    int score1=0,score2=0; //Declare two scores for two players
    int round_number,a=0; // Declare number of rounds and counter for rounds
    float max1 ,max2; //Declare largest numbers for dices
    float p1_sum = 0;
    float p2_sum = 0; //Declare two number
    
    
    char ch; //Initialize next round
    
    ifstream in;//Input File stream
    ofstream out;//Output file
    string fileIn;
    char fileOut[]="Scores.txt";
    
    
    in.open("Game.txt");
    out.open(fileOut);
    //Display output
    cout<<"Welcome to a game of Going to Boston Dice Game"<<endl;//Basic introduction
    cout<<"Please enter the number of rounds (upto 10 rounds)"<<endl;//Instruction for player
    out<<"Welcome to a game of Going to Boston Dice Game"<<endl;
    out<<"Please enter the number of rounds (upto 10 rounds)"<<endl;
    //Input Value
    cin>>round_number;
    in>>round_number; 
    //Insert number of rounds
 
    input_valid(round_number); //input validation function
    
    //Display output
    Players(player1,player2); //display function
    
    //Output to the file
    out <<player1;
    out <<setw(53)<<player2<<endl;
    
    do{ //start do-while loop
    cout<<"Press enter to proceed to next round or see the result"<<endl; //generates pause in each round
    cin.get(ch); //Input to start a new round
    
 
    int n=3; //represents number of dices
    for (int round = 0; round < 3; round++) // start a for-loop for rounds
    {
       
        cout <<"Numbers on dice(s) = " ; //Display output
        //Output to the file
        out <<"Numbers on dice(s) = " ;
        
        player1_dice(arr1,3); //player 1 dice rolls
        
        cout<<setw(47); //Display format purpose
        cout<<"Numbers on dice(s) = "; //Display output
        //Output to the file
        out<<setw(53-(2*n));
        out<<"Numbers on dice(s) = ";
        
        player2_dice(arr2,3); //player 2 dice rolls
        
        cout<<endl; //Display format purpose
        //Output to the file
        out<<endl;
        
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
        
        //Output to the file
        out << "Largest number : " << max1;
        out<<setw(52)<<"Largest number : "<<max2<<endl;
        
        p1_sum +=max1; //the sum of all the largest numbers for player 1
        p2_sum +=max2; //the sum of all the largest numbers for player 2
        n--; //decrement of number of dices in each loop
    }
    
    //Display output
    cout<< "round sum = "<<p1_sum; //Display each round's sum
    cout<<setw(51)<< "round sum = "<<p2_sum<<endl; //Display each round's sum
    //Output to the file 
    out<< "round sum = "<<p1_sum;
    out<<setw(51)<< "round sum = "<<p2_sum<<endl;
    
    if (p1_sum > p2_sum) // Determine the winner of the round
    {
        cout<<endl; //Display format purpose
        cout<<player1<<" wins the round"<<endl; // Display output
        score1=score1+1; //generate 1 score upon winning
        //Output to the file
        out<<endl;
        out<<player1<<" wins the round"<<endl;
    }
    if (p2_sum>p1_sum) //Determine the winner of the round
    {
        cout<<endl; //Display format purpose
        cout<<player2<<" wins the round"<<endl; //Display output
        score2=score2+1; //generate 1 score upon winning
        //Output to the file
        out<<endl;
        out<<player2<<" wins the round"<<endl;
    }
    if (p2_sum == p1_sum)
    { //Determine the winner of the round
        cout<<"draw"<<endl; //Display output
        //no score for both players upon draw
        //Output to the file
        out<<"draw"<<endl;
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
    cout<<player1<<" scored = "<<score1<<setw(42)<<player2<<" scored = "<<score2<<endl; //Score board
    
    //Output to the file
    out<<player1<<" scored = "<<score1<<setw(42)<<player2<<" scored = "<<score2<<endl;
    
    
    if (score1 > score2) //Determine the winner of the game
    {
        cout<<setw(34)<<player1<<" wins the game"<<endl;//Display winner
        //Output to the file
        out<<setw(34)<<player1<<" wins the game"<<endl;
    }
    else if (score2 > score1) //Determine the winner of the game
    {
        cout<<setw(34)<<player2<<" wins the game"<<endl; //Display winner
        //Output to the file
        out<<setw(34)<<player2<<" wins the game"<<endl;
    }
    else  //Determine the winner of the game
    {
        cout<<setw(40)<<"draw"<<endl; //Display draw
        //Output to the file
        out<<setw(40)<<"draw"<<endl;
    }
    cout<<setw(45)<<"end of the game"<<endl; //Messages the end of the game
    cout<<"Restart to play a new game"<<endl;
    //Output to the file
    out<<setw(45)<<"end of the game"<<endl;
    out<<"Restart to play a new game"<<endl;
    //Close the file
    in.close();
    out.close();
    //Exit
    return 0;
    //Execute the program
}