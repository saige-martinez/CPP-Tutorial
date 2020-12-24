/*
 * This program creates a function named "myFunction" that is called inside
 * main().
 */

#include <iostream>
using namespace std;

// Function declaration.
void myFunction();

// Main method.
int main() {
    myFunction();
    return 0;
}

// Function definition.
void myFunction() {
    cout << "I just got executed!";
}
