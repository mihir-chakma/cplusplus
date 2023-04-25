#include <iostream>
using namespace std;

/*
    for(initialization expression; condition expression; update expression) {
        // body of loop 
    }
*/

int main() {

    // for loop 
    for(int i = 1; i <=5; i++) {
        cout << i << ".Hello, C++" << endl;
    }


    // Iterate array elements using the auto keyword
    int arr[] = {40, 50, 60, 70, 80, 90, 100};
    for(auto element: arr) {
        cout << element << " ";
    }
}