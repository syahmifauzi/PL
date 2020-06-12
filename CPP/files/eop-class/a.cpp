#include <iostream>
#include <fstream> // for files
#include <cstdlib> // for exit()
using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open("stock.dat");

    // to check whether the file exists or not
    if (inputFile.fail()) {
        cout << "The file was not successfully opened\n"
             << "Please check if the file exists\n";
        exit(1);
    }

    cout << "Your file has successfully read\n";

    return 0;
}