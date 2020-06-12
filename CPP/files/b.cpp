#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // simpler way than a.cpp (create an obj & associate with what file?)
    ofstream syhmiFile("animelist.md");

    if (syhmiFile.is_open()) {
        cout << "The file is open" << endl;
        syhmiFile << "Sword Arts Online (SAO)\n";

    } else {
        cout << "Syhmi, you messssed up" << endl;
    }

    syhmiFile.close();

    return 0;
}