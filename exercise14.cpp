/*
 * This program creates a pointer variable with the name "ptr", that points
 * to a string variable named "food" and outputs each variable value.
 */

#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;
    cout << food << endl << ptr;
    return 0;
}
