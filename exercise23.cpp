/*
 * This program opens, reads from, and outputs text from a text file.
 */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create a text string.
    string myText;

    // Read from file.
    ifstream  myReadFile("filename.txt");

    // Use while loop with getline() function to read the file line by line.
    while (getline(myReadFile, myText)) {
        // Output text from file.
        cout << myText;
    }

    // Close file.
    myReadFile.close();

    return 0;
}
