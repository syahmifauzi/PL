#include <iostream>
#include <cstdio>
#include "variables.h"
#include "functions.h"
using namespace std;

int main() {
    
    while (option != '0') {
        cout << "POINT-OF-SALE SYSTEM" << endl
             << "--------------------" << endl << endl;

        cout << "Option: " << endl
             << "(1) New Sale" << endl
             << "(2) View Sales" << endl
             << "(0) Quit" << endl;
        cout << " >>> "; cin >> option;

        switch (option) {
            case '1':
               newSale();
               break;
            case '2':
               listSales();
               break;
            case '0':
                break;
            default:
                cout << "Invalid input. Please retry" << endl
                     << "Please any key to continue . . . " << endl;
                putchar(1);
                break;
        }
        
        clearScreen();
    }
    
    clearScreen();
    cout << "Thank you for using this system" << endl;
    
    return 0;
}
