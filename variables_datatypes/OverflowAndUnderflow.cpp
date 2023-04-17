#include <iostream>
using namespace std;

int main() {
    int x = INT_MAX; // 2147483647
    int y = INT_MIN; // -2147483647 - 1
    x = x + 1;
    y = y - 1;
    cout << x << endl;
    cout << y << endl;

    return 0;

}