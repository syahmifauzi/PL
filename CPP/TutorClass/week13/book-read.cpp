#include <iostream>
#include <iomanip>
#include <fstream>
#include "variables.h"
using namespace std;

int main()
{
    // read from a file
    ifstream inFile("books.dat");
    if (!inFile.fail()) {
        count = 1;
        while (getline(inFile, value, ';')) { // ; is the separator
            cout << left << setw(20) << value;
            if (count == 2) {
                cout << endl;
            }
        }
    }
    inFile.close();

    return 0;
}