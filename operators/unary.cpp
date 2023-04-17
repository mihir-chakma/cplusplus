#include <iostream>
using namespace std;

int main() {
    
    // Minus operator (-var)
    int num1 = 10;
    // converting positive to negative
    num1 = -num1;
    cout << "Negative value: " << num1 << endl;
    int num2 = -20;
    // converting negative to positive 
    num2 = -num2;
    cout << "Positive value: " << num2 << endl;


    // NOT operator (!var)
    int a = 10, b = 1;
    cout << "!(a < b) = " << !(a < b) << endl;
    cout << "(a < b) = " << (a < b) << endl;


    // Increment operator (var++, ++var)
    int num = 10;
    cout << "Post increment = " << num++ << endl;
    // first print 10, then number is increment to 11
    cout << "After Post increment = " << num << endl;
    // num was 11, increment to 12 and print 
    cout << "Pre increment = " << ++num << endl;


    // Decrement operator (var--, --var)
    int decre = 10;
    cout << "Post decrement = " << decre-- << endl;
    // first print 10, then number is decrement to 9
    cout << "After Post decrement = " << decre << endl;
    // num was 9, decrement to 8 and print 
    cout << "Pre decrement = " << --decre << endl;


    // Bitwise complement (~var)
    int n1 = 6, n2 = -2;
    cout << n1 << "'s bitwise complement = " << ~n1 << endl;
    cout << n2 << "'s bitwise complement = " << ~n2 << endl;


    return 0;
}