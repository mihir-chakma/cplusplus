// Syntax 2:

/*
    label:
    .
    .
    .
    goto label;
*/

#include <iostream>
using namespace std;

int main() {

    // Print numbers from 1 to 5 using goto statements
    int num = 1;
    print:
        cout << num << " ";
        num++;
        if (num <= 5)
            goto print;

    return 0;
}