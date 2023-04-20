// Syntax 1:

/*
    goto label;
    .
    .
    .
    label:
*/

#include <iostream>
using namespace std;

int main() {

    // Check if a number is even or not and print accordingly using the goto statement

    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0)
        goto printeven;
    else
        goto printodd;

    // label:
    printeven:
        cout << "Even number.";
        return 0;
    printodd:
        cout << "Odd number.";
        return 0;


    // return 0;
}