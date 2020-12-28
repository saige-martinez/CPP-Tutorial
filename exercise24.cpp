/*
 *
 */

#include <iostream>
using namespace std;

int main() {
    try {
        int age;
        cout << "How old are you? ";
        cin >> age;
        if (age >= 21) {
            cout << "Have a beer!";
        }
        else {
            throw (age);
        }
    }

    catch (int catchNumber) {
        cout << "Get out of my bar." << endl;
        cout << "You're only " << catchNumber << ".";
    }

    return 0;
}
