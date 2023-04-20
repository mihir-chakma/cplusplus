#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

// Largest of 3 numbers

int main() {
    //Write your code here
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int largest;

    if((a >= b) && (a >= c)) {
        largest = a;
    } else if ((b >= a) && (b >= c)) {
        largest = b;
    } else {
        largest = c;
    }

    cout << largest << endl;


    return 0;
}