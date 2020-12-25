/*
 * This program creates a class called "car" and an object, and outputs the
 * object's attributes.
 */

#include <iostream>
using namespace std;

// Class definition.
class car {
    public:
        // Attribute definitions.
        int year;
        string make;
        string model;

        // Constructor definition.
        car(int a, string b, string c) {
            year = a;
            make = b;
            model = c;
        }
};

// Main method.
int main() {
    // Object declaration.
    car myCar(2021, "Honda", "Civic Type R");

    // Output attributes.
    cout << myCar.year << " " << myCar.make << " " << myCar.model << endl;
    return 0;
}
