#include <iostream>
#include <string>
using namespace std;

// Types of Variables 

// Local Variables 
// Instance Variables
// Static Variables 


// Local Variables
void function() {
    // local variable marks 
    int marks = 90;
    marks = marks + 2;
    cout << "Student obtain " << marks << " marks.";
    return;
}


// Instance Variables
class A {
    int a; // by default private instance variables
    int b;
    public:
        int c; // public instance variable

    void function() {
        a = 10;
        cout << a;
    }
};


// Static Variables 
class B {
    static int var; // static variable 

    void function() {
        ++var;
    }
};


int main() {

    cout << "Types of Variables" << endl;

    return 0;
}