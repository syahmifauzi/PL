#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream - reading data to a file
    // ifstream - reading data from a file
    ifstream playerFile("players.yaml");

    int idNo;
    string name;
    double money;

    // by default, deconstructor will automatically close the file
    // when the pointer reach EOF - same if using ofstream
    while (playerFile >> idNo >> name >> money) {
        cout << idNo << ", " << name << ", " << money << endl;
    }

    return 0;
}