#include <iostream>
using namespace std;

/*
    intitialization;
    while(condition) {
        // statements
        update_expression;
    }
*/

int main() {

    // while loop 
    int i = 1;
    // The loop continue to print the value of i till
    // The condition is false
    while (i <= 5)
    {
        cout << "Value of i is : " << i << endl;
        i++; // update 
    }

    return 0;
    
}