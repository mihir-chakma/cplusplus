#include <iostream>
using namespace std;

int main() {

    // Switch Statement

    /*
    switch(expression) {
        case constant1:
        //code to be executed if the expression equals constant1
        break;
        case constant2:
        //code to be executed if the expression equals constant2
        break;
        case constant3:
        //code to be executed if the expression equals constant3
        break;
        ...
        default:
        //code to be executed if the expression does not match any constants
    }

    */

    float num1, num2, result;
    char oper; // to store operator choice

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose operation to perform (+, -, *, /) : ";
    cin >> oper;

    // switch 
    switch (oper)
    {
    case '+':
        result = num1 + num2;
        cout << "Result : " << num1 << " " << oper << " " << num2 << " = " << result;
        break;
    case '-':
        result = num1 - num2;
        cout << "Result : " << num1 << " " << oper << " " << num2 << " = " << result;
        break;
    case '*':
        result = num1 * num2;
        cout << "Result : " << num1 << " " << oper << " " << num2 << " = " << result;
        break;
    case '/':
        result = num1 / num2;
        cout << "Result : " << num1 << " " << oper << " " << num2 << " = " << result;
        break;
    
    default:
    cout << "Invalid Operation!";

    }

    return 0;

}