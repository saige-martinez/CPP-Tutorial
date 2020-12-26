/*
 * This program creates a derived class called "programmer" that inherits
 * from a base class called "employee" and outputs the base class attributes.
 */

#include <iostream>
using namespace std;

// Base class definition.
class employee {
    protected:
        int salary;
};

// Derived class definition.
class programmer: public employee {
    public:
        int bonus;

        void setSalary(int s) {
            salary = s;
        }

        int getSalary() {
            return salary;
        }
};

// Main method.
int main() {
    programmer myProgrammer;

    myProgrammer.setSalary(75000);
    myProgrammer.bonus = 15000;

    cout << "Salary: $" <<  myProgrammer.getSalary() << endl;
    cout << "Bonus: $" << myProgrammer.bonus;
    return 0;
}
