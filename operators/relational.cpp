#include <iostream>
using namespace std;

int main() {

    // Equal to (==)
    int a = 10, b = 20, c = 20;
    // check two operands are equal or not if they equal return true,
    // else return false
    cout << (a == b) << endl;
    cout << (b == c) << endl;


    // Not Equal to (!=)
    cout << (a != b) << endl;
    cout << (b != c) << endl;
    // Returns true if the left operand is not equal to the right operand


    // Greater than (>)
    cout << (a > b) << endl;
    cout << (b > a) << endl;
    // Returns true if the left operand is greater than right operand


    // Greater than or Equal to (>=)
    int n1 = 10, n2 = 8;
    cout << (n1 >= n2) << endl;


    // Less than (<)
    int a1 = 10, b1 = 15;
    cout << (a1 < b1) << endl;


    // Less than or Equal to (<=)
    int a2 = 10, b2 = 5;
    cout << (a1 <= b1) << endl;

    return 0;

}