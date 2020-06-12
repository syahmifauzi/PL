#include <iostream>
#include <fstream> // for files
#include <cstdlib> // for exit()
using namespace std;

int main()
{
    string filename;

    // get filename from user
    cout << "Enter filename: ";
    cin >> filename;
    ofstream outFile;
    outFile.open(filename.c_str());

    outFile << "Fridge " << 3200.50
            << "\nMicrowave " << 800.25
            << "\nIron " << 125.60;

    outFile.close();

    cout << "Your file has successfully written\n";

    return 0;
}