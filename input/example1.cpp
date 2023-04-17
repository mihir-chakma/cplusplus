#include <iostream>
using namespace std;

int main() {
    
    // Calculate the Simple Interest 
    int principal, time;
    double rate, si;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate amount: ";
    cin >> rate;
    cout << "Enter time amount: ";
    cin >> time;

    si = (principal * rate * time) / 100;
    cout << "Simple Interest: " << si << endl;

    return 0;

}