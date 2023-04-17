#include <iostream>
#include <string>
using namespace std;

// Misc Operators 

int main() {

    // 1. sizeof() 
    int i;

    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(float) << endl;
    cout << "Size of int : " << sizeof(double) << endl;
    cout << "Size of int : " << sizeof(string) << endl;
    cout << "Size of int : " << sizeof(i) << endl;

    // 2. Comma (,)
    int x, y =100;
    x = (y + 10, 99 + y);
    cout << "With brackets value of x : " << x << endl;
    x = y + 10, 99 + y;
    cout << "Without brackets value of x : " << x << endl;


    // 3. Conditional Operator(?:) or Ternary Operators
    // Expression1 ? Expression2 : Expression3
    int c = 1, d;
    d = (c < 10) ? 2 : 5; // As a is less than 10 hence b = 2 
    cout << "Value of b : " << d << endl;


    // Pointer Operator:
    //  1. & - It refers to the address(memory location) in which the operand is stored
    //  2. * - It is a Pointer operator 

    int a = 1, *b; // here b is a pointer operator of int type
    b = &a;
    cout << "Address of variable a : " << b << endl;
    cout << "Address of variable b : " << &b << endl;

    // Here, answers may vary

    return 0;

}