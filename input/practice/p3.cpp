#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int principal, time, answer;
    float rate;
    cout << "Enter principal amount: ";
    cin >> principal; // principal amount
    cout << "Enter rate of interest: ";
    cin >> rate; // rate of interest 
    cout << "Enter time period: ";
    cin >> time; // time period 

    answer = principal * rate * time / 100;
    cout << "Answer = " << answer << endl;

    return 0;
}