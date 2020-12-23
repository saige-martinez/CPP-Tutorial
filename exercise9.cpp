/*
 * This program uses a switch statement to output the day.
 */

#include <iostream>
using namespace std;

int main() {
    int day = 2;
    switch (day) {
    case 1:
        cout << "Saturday";
        break;
    case 2:
        cout << "Sunday";
        break;
    }
    return 0;
}
