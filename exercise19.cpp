/*
 * This program creates a derived class from a class which derives from
 * another class, and outputs each class function.
 */

#include <iostream>
using namespace std;

// Base class definition.
class parent {
    public:
        void parentFunction() {
            cout << "This is from the parent class.\n";
        }
};

// Derived class definition.
class child: public parent {
    public:
        void childFunction() {
            cout << "This is from the child class.\n";
        }
};

// Derived-derived class definition.
class grandchild: public child {
    public:
        void grandchildFunction() {
            cout << "This is from the grandchild class.\n";
        }
};

// Main method.
int main() {
    grandchild myGrandchild;

    myGrandchild.parentFunction();
    myGrandchild.childFunction();
    myGrandchild.grandchildFunction();
    return 0;
}
