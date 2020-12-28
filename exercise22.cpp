/*
 * This program creates, opens, writes to, and closes a text file.
 */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create and open a text file.
    ofstream myFile("filename.txt.");

    // Write to file.
    myFile << "Files can be tricky, but fun!";

    // Close file.
    myFile.close();

    return 0;
}
