#include <iostream>
#include <fstream> // for files
#include <cstdlib> // for exit()
using namespace std;

int main()
{
    string filename;

    // write into file
    cout << "Enter filename: ";
    cin >> filename;
    ofstream outFile;
    outFile.open(filename.c_str());

    outFile << "Fridge\t" << 3200.50
            << "\nMicrowave\t" << 800.25
            << "\nIron\t" << 125.60;

    outFile.close();
    cout << "Your file has successfully written\n\n";

    // read from file
    ifstream inFile(filename.c_str());

    string descrip;
    double price;

    inFile >> descrip >> price;

    while (inFile.good()) { // check next line
        cout << descrip << ' ' << price << '\n';
        inFile >> descrip >> price; // read next line
    };

    inFile.close();
    cout << "Your file has successfully read\n\n";

    return 0;
}