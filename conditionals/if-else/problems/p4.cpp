#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

// Find Quadrant of the coordinate point

int main() {
    //Write your code here
    int x, y;
    cin >> x >> y;

    if(x > 0 && y > 0) {
        cout << "1st Quadrant";
    } else if(x < 0 && y > 0) {
        cout << "2nd Quadrant";
    } else if(x < 0 && y < 0) {
        cout << "3rd Quadrant";
    } else if(x > 0 && y < 0) {
        cout << "4th Quadrant";
    } else if(x && y == 0) {
        cout << "x axis";
    } else if(y && x == 0) {
        cout << "y axis";
    } else {
        cout << "Origin";
    }

    return 0;
}