#include <iostream>
#include <fstream>
using namespace std;

int getOption() {
    int opt;

    cout << "1 - Just plain items" << endl
         << "2 - Helpful items" << endl
         << "3 - Harmful items" << endl
         << "4 - Quit program" << endl
         << "Your choice: ";
    
    cin >> opt;

    return opt;
}

void displayItems(int x) {
    ifstream objectsFile("objects.txt");
    
    string name;
    double power;
    
    if (x == 1)
        while (objectsFile >> name >> power)
            if (power == 0)
                cout << name << " " << power << endl;
    
    if (x == 2)
        while (objectsFile >> name >> power)
            if (power > 0)
                cout << name << " " << power << endl;
    
    if (x == 3)
        while (objectsFile >> name >> power)
            if (power < 0)
                cout << name << " " << power << endl;
}

int main()
{
    int opt = getOption();

    while (opt != 4) {
        switch (opt) {
            case 1:
                displayItems(1);
                break;
            case 2:
                displayItems(2);
                break;
            case 3:
                displayItems(3);
                break;
            default:
                cout << "Not a good choice.." << endl;
        }
        
        cout << endl;
        opt = getOption();
    }

    return 0;
}