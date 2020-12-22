/*
 * This program creates variables of different data types, assigns values
 * to each, and outputs each value.
 */

#include <iostream>
using namespace std;

int main() {
    int myNum = 9;
    double myDoubleNum = 8.99;
    char myLetter = 'A';
    bool myBool = false;
    string myText = "Hello World!";
    cout << myNum << endl << myDoubleNum << endl << myLetter << endl << myBool
         << endl << myText;
    return 0;
}

