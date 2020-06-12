/*
 * Muhammad Syahmi Fathimi bin Ahmad Fauzi 1715845
 * Muhammad Farhan bin Azhar 1718485
 */
#include <iostream>
using namespace std;

int main()
{
    int package, qty;

    cout << "Enter your package (1-12): ";
    cin >> package;

    cout << "Enter the quantity: ";
    cin >> qty;

    switch (package) {
        case 1:
        case 2:
        case 3:
            if (package % 2 == 0 && qty > 5)
                cout << "Exclusive" << endl;
            else
                cout << "Extravaganza" << endl;
            break;
        case 4:
        case 5:
        case 6:
            if (package % 2 == 0 && qty > 5)
                cout << "Extravaganza" << endl;
            else
                cout << "Jumbo" << endl;
            break;
        case 7:
        case 8:
        case 9:
            if (package % 2 == 0 && qty > 5)
                cout << "Jumbo" << endl;
            else
                cout << "Special" << endl;
            break;
        case 10:
        case 11:
        case 12:
            if (package % 2 == 0 && qty > 5)
                cout << "Special" << endl;
            else
                cout << "Normal" << endl;
            break;
        default:
            cout << "Invalid Category" << endl;
    }

    return 0;
}
