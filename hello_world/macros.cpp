#include <iostream>
using namespace std;

// Macros in C++ 

// macro definition 
#define LIMIT 5 // there is no need to have semicolan 

int main() {

    for(int i = 0; i < LIMIT; i++) {
        cout << i << " ";
    }

    return 0;
}