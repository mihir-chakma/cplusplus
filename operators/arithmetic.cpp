#include <iostream>
using namespace std;

int main() {
    int a = 50, b = 20;
    int addition = a + b;
    int subtraction = a - b;
    int mul = a * b;
    int division = a / b;
    int modules = a % b;

    cout << "The addition of " << a << " and " << b << " is: " << addition << endl;
    cout << "The subtraction of " << a << " and " << b << " is: " << subtraction << endl;
    cout << "The multiplication of " << a << " and " << b << " is: " << mul << endl;
    cout << "The division of " << a << " and " << b << " is: " << division << endl;
    cout << "The modulus of " << a << " and " << b << " is: " << modules << endl;

    return 0;
}