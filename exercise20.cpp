/*
 * This program creates a derived class that inherits from two base classes
 * and outputs the base class functions.
 */

#include <iostream>
using namespace std;

// First base class definition.
class father {
    public:
        void fatherFunction() {
            cout << "black hair";
        }
};

// Second base class definition.
class  mother {
    public:
        void motherFunction() {
            cout << "blue eyes";
        }
};

// Derived class definition.
class child: public father, public mother {
};

// Main method.
int main() {
    child myChild;

    cout << "My child has ";
    myChild.fatherFunction();
    cout << " and ";
    myChild.motherFunction();
    cout << ".";
    return 0;
}
