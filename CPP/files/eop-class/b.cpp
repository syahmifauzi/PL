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
    ifstream inputFile;
    inputFile.open(filename.c_str());

    // to check whether the file exists or not
    if (inputFile.fail()) {
        cout << "The file was not successfully opened\n"
             << "Please check if the file exists\n";
        exit(1);
    }

    cout << "Your file has successfully read\n";

    return 0;
}