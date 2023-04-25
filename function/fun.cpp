#include <iostream>
using namespace std;

// function declaration 
int max(int, int);


int main() {
    int a = 20;
    int b = 50;

    // Calling the function
    int result = max(a, b);
    cout << "The result is : " << result << endl;

    return 0;
}

// Function definition 
int max(int x, int y) {
    if(x > y) {
        return x;
    } else {
        return y;
    }
}