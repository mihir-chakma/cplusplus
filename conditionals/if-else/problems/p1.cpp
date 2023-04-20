#include <iostream>
using namespace std;

// Find Character Case 

int main() {
    //Write your code here
    char ch;
    cin >> ch;
    int i = int(ch);
    if((i >= 65) && (i <= 97)) {
        cout << "1" << endl;
    } else if ((i >= 97) && (i <= 122)) {
        cout << "0" << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}