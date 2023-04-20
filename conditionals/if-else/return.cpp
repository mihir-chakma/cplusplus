// return statement 

// Syntax:
// return [expression];


#include <iostream>
using namespace std;

// int return type function to calculate sum 
int Sum(int a, int b) {
    int s1 = a + b;
    return s1;
}

// void returns type function to print
void Print(int s2) {
    cout << "The sum is " << s2;
    return;
}

int main() {

    int n1 = 10, n2 = 20;
    int sum = Sum(n1, n2);
    Print(sum);

    return 0;

}