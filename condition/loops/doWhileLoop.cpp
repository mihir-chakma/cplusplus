#include <iostream>
using namespace std;

// do-while loop  

/*
    intitialization;
    do {
        // statements
        update_expression;
    }
    while(condition);
*/

int main() {

    // Initialization expression
    int i = 1;

    do {
        // body of loop 
        cout << "Inside the do-while loop" << endl;
        i++; // update expression
    } while(i < 5);
    

    return 0;
    
}