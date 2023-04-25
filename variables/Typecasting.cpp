#include <iostream>
using namespace std;

int main() {

    // Implicit Type Conversion 
    int number = 100;
    char letter = 'c';
    float dec = 1.5;
    // here letter is implicitly converted to int and 
    // its value is the ASCII value of 'c' i.e. 99 
    int res1 = number + letter;
    cout << res1 << endl;

    float res2 = res1 + dec; // here res1 is implicitly converted to float. 
    cout << res1 << endl;


    // Explicit Type Conversion 
    double db_number = 5.6;
    int res = (int)db_number + 10;

    cout << "Result = " << res << endl;

    return 0;
}