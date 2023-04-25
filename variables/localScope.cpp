#include <iostream>
#include <string>
using namespace std;

// Local Variable Scope 
void person() {
    std::string gender = "Male";
    // This variable gender is a local to the function person()
    // and cannot be used outside this function
    cout << gender << endl;
}

int main() {

    person();

    return 0;
}