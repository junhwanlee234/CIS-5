/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 19, 2019, 9:27 PM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
int dec;
    string str = "";
    cout << "\n\n\t Convert decimal number to Roman number.";
    cout << \n\n\t enter decimal number: ";
    cin >> dec;
    cout << " \n\n roman equivqlent to the decimal " << dec << " is " << roman( dec);
    cout << "\n\n\t";
    system( "pause");
return 0;
}
string roman( int n)
{
string r = "";
int decimals [] = { 1, 5, 10, 50, 100, 500, 1000 };
string romans [] = { "I", "V", "X", "L", "C", "D", "M"};
while ( n > 0 )
   {
    while ( n >= 1000)
    {
      r.append ( "M" );
      n -= 1000;
    }
  for ( int i = 0; i < 6; i++)
   {
    if ( ( n + decimals[ i ] ) == 1000)
     {
      r.append( romans[ i ] );
      r.append( " M " );
      n -= 1000 - decimals[ i ];
      break;
     }
    return 0;
}

