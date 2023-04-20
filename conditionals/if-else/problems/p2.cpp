#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

// Total Salary 

int main() {
    //Write your code here
    double basic;
    char grade;
    int totalSalary;

    cin >> basic;
    cin >> grade;

    double hra = 0.2 * basic;
    double da = 0.5 * basic;
    int allow = 0;
    
    if(grade == 'A') {
        allow = 1700;
    } else if (grade == 'B') {
        allow = 1500;
    } else {
        allow = 1300;
    }

    double pf = 0.11 * basic;

    totalSalary = round(basic + hra + da + allow - pf);
    cout << totalSalary << endl;

    return 0;
}