#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream playerFile("players.yaml");

    cout << "Enter player ID, name and money." << endl
         << "Press ctrl+c to quit" << endl;

    int idNum;
    string name;
    double money;

    while (cin >> idNum >> name >> money) {
        playerFile << idNum << " " << name << " " << money << endl;
    }

    return 0;
}