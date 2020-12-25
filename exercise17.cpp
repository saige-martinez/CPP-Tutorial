/*
 * This program creates a class called "employee" and an object called
 * "myEmployee", and sets, gets, and
 * outputs the object attribute.
 */

#include <iostream>
using namespace std;

// Class definition.
class employee {
    private:
        // Attribute definitions.
        int salary;

    public:
        // Set method.
        void setSalary(int s) {
            salary = s;
        }

        // Get method.
        int getSalary() {
            return salary;
        }
};

// Main method.
int main() {
    // Object declaration.
    employee myEmployee;

    // Attribute declarations.
    myEmployee.setSalary(78000);

    // Output attributes.
    cout << "$" << myEmployee.getSalary();
    return 0;
}
