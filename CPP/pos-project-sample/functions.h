#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

extern void clearScreen();
extern void viewItem();
extern void newSale();
extern void viewSale();
extern string generateFilename();
extern void writeToFile();
extern void readFromFile();
extern void listSales();
extern void openSale(int no);

void clearScreen() {
    for (int i = 0; i < 100; i++) cout << endl;
}

void viewItem(Item item) {
    cout << left
         << setw(25) << item.name
         << setw(10) << item.quantity
         << setw(15) << setprecision(2) << item.price
         << setw(15) << setprecision(2) << item.quantity*item.price
         << endl;
}

void viewSale() {
    cout << left << fixed
         << "===========================================================" << endl
         << setw(25) << "Name"
         << setw(10) << "Qty"
         << setw(15) << "Price (RM)"
         << setw(15) << "Total (RM)"
         << endl;
    for (int i = 0; i < idx; i++) viewItem(*(items+i));
    cout << "===========================================================" << endl;
}

void newSale() {
    idx = 0;
    command = 'c';
    items = new Item[100];
    while (command != 'q') {
        clearScreen();

        cout << "NEW SALE" << endl
             << "========================" << endl
             << endl << endl;
        viewSale();
        cout << "Total item: " << idx << endl << endl;

        cout << "Command: (A): add; (Q): quit; (W): Write to file/Finalise Sale " << endl;
        cin >> command;
        switch (command) {
            case 'A': 
            case 'a':
                do {
                    cin.ignore();
                    cout << "Enter item name: "; getline(cin, newItem.name);
                    cout << "Enter item quantity: "; cin >> newItem.quantity;
                    cout << "Enter item price per unit: "; cin >> newItem.price;
                    cout << "Confirm (Y/N) :"; cin >> confirm;
                    redo = (confirm == 'N' || confirm == 'n');
                } while (redo);
                items[idx] = newItem;
                idx++;
                break;
            case 'Q': 
            case 'q':
                break;
            case 'W': case 'w':
                cout << "Confirm to write the sale into file (Y/N): "; cin >> confirm;
                write = (confirm == 'Y' || confirm == 'y');
                if (write) {
                    writeToFile();
                    command = 'q';
                }
            default:
                cout << "Invalid command. Please re-enter" << endl
                     << "Press any key character/number to continue" << endl;
        }
    }
}

string generateFilename() {
    srand(time(NULL));
    return to_string(rand()%999999+100000);
}

void writeToFile() {
    string ext = ".dat";
    string filename = generateFilename();
    string path = filename+ext;
    ofstream outFile(path.c_str());

    if (!outFile.fail()) {
        for (int i = 0; i < idx; i++) {
            outFile << items[i].name << ";"
                    << items[i].quantity << ";"
                    << items[i].price << ";";
        }
        outFile.close();
        outFile.open("serials.txt", ios::app);
        if (!outFile.fail()) {
            outFile << filename << endl;
            outFile.close();
        }
    }
}

void listSales() {
    string filename = "serials";
    string ext = ".txt";
    string path = filename+ext;
    ifstream inFile(path.c_str());
    
    idx = 0;
    serials = new string[100];
    if (!inFile.fail()) {
        clearScreen();
        cout << "VIEW SALE" << endl
             << "========================" << endl
             << endl << endl;

        cout << left
             << setw(5) << "No"
             << setw(10) << "Serial"
             << endl;
        while (getline(inFile, serial)) {
            serials[idx++] = serial;
            cout << left
                 << setw(5) << idx
                 << setw(10) << serial
                 << endl;
        }
        inFile.close();
        cout << "Enter file no to view (1-"<<idx<<"): ";
        cin >> no;
        openSale(no);
    }
}

void openSale(int no) {
    string filename = serials[no-1];
    string ext = ".dat";
    string path = filename+ext;
    ifstream inFile(path.c_str());

    if (!inFile.fail()) {
        cout << left << fixed
             << "=========================================================" << endl
             << setw(15) << "Name"
             << setw(15) << "Qty"
             << setw(15) << "Price (RM)"
             << endl;
        count = 1;
        while (getline(inFile, value, ';')) {
            cout << setw(15) << value;
            if (count == 3) {
                cout << endl;
                count = 1;
            }
            else count++;
        }
        cout << "========================================================="
             << endl << endl;
        inFile.close();
        cout << "Press any key then enter to close." << endl;
        cin >> value;
    }
}

