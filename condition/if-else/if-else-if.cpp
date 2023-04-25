#include <iostream>
using namespace std;

int main() {

    // if else-if statement 

    /*
    if(condition1) {
        // Executes if condition1 is true
    } else if(condition2) {
        // Executes if condition2 is true
    } } else if(condition3) {
        // Executes if condition3 is true
    } else {
        // Executes if all conditions become false
    }
    */
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(number > 0) {
        cout << "You entered a positive integer." << endl;
    } else if(number < 0) {
        cout << "You entered a negative integer." << endl;
    } else {
        cout << "You entered 0." << endl;
    }

    return 0;

}