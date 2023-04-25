#include <iostream>
#include <algorithm>
using namespace std;

// for-each loop  

/*
    for_each(InputIterator first, InputIterator last, Function fn);
*/

int print_even(int n) {
    if(n % 2 == 0) {
        cout << n << " ";
    }
    return n;
}

int main() {

    // create an array list 
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "The Array contains the following even numbers:" << endl;
    for_each(arr, arr + 5, print_even); // for_each 

    cout << "\n";

    // for_each loop can be executed using the keyword "for"
    int array_list[] = {1, 2, 3, 4, 5};
    // Printing elements of an array using for_each loop 
    for (int x: array_list)
    {
        cout << x << " ";
    }
    

    return 0;
    
}