/*
 * This program creates a derived class named "rocket" that inherits attributes
 * and methods from a base class named "vehicle." All attributes and methods are
 * output.
 */

#include <iostream>
using namespace std;

// Base class definition.
class vehicle {
    private:
        // Attribute definitions.
        string brand;

    public:
        // Set method.
        void setBrand(string b) {
            brand = b;
        }

        // Get method.
        string getBrand() {
            return brand;
        }

        void on() {
            cout << "The vehicle is on.";
        }
};

// Derived class definition.
class rocket: public vehicle {
    private:
        // Attribute definition.
        string model;

    public:
        // Set method.
        void setModel(string m) {
            model = m;
        }

        // Get method.
        string getModel() {
            return model;
        }
    };

// Main method.
int main() {
    // Object declaration.
    rocket myRocket;

    // Attribute declarations.
    myRocket.setBrand("SpaceX");
    myRocket.setModel("Starship");

    // Output attributes.
    cout << "Brand: " << myRocket.getBrand() << endl;
    cout << "Model: " << myRocket.getModel() << endl;
    myRocket.on();
    return 0;
}
