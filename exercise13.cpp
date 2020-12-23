/*
 * This program creates an array of type string called "cars" and outputs
 * each element of the array using a for loop.
 */

#include <iostream>
using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for (int i = 0; i < 4; i++) {
        cout << i << ": " << cars[i] << endl;
    }
    return 0;
}
