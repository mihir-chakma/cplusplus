#include <iostream>
using namespace std;

int main() {

    // nested if statement 

    /*
    if(condition1) {
        // Executes when condition1 is true
        if(condition2) {
            // Executes when condition2 is true
        }
    } else {
        // Executes this when above two conditions are false
    }
    */
    int age = 15;
    
    // Outer if condition 
    if(age >= 14) {

        // nested if condtion
        if(age >= 18) {
            cout << "You're an Adult." << endl;
        } else {
            cout << "You're a Teenager." << endl;
        }

    // Outer else condition 
    } else {

        if(age > 0) {
            cout << "You're a Child." << endl;
        } else {
            cout << "Invalid age." << endl;
        }
    }

    return 0;

}