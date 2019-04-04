/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: junhw
 *
 * Created on March 31, 2019, 11:57 PM
 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;

    
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}
