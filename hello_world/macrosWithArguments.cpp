#include <iostream>
using namespace std;

// macro with parameter 
#define Area(l, b) (l * b)

int main() {

    int l = 10, b = 5, a;
    a = Area(l, b);

    cout << "The Area of rectangle is: " << a << endl;

    return 0;
}