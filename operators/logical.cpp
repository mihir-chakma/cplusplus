#include <iostream>
using namespace std;

int main() {

    // Logical AND (&&)
    // This operator returns true(1),if both the conditions are true else returns false(0)
    int a = 10, b = 20, c = 30;
    cout << ((b > a) && (c > b)) << endl;
    cout << ((b > a) && (c < b)) << endl;

    // Logical OR (||)
    // This operator returns true(1)if any one of theconditions is true.
    cout << ((b > a) || (c < b)) << endl; // true 
    cout << ((b < a) || (c < b)) << endl; // false

    // Logical NOT (!)
    int x = 10; 
    int y = 20; 
    cout << (!(x == y)) << endl; // true 
    cout << (!(b > a)) << endl; // false

    return 0;

}