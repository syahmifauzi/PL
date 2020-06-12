#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

const int TOTAL_TABS = 7;
string tabFilename;

template <class T>
void swap(T *v1, T *v2) {
    T temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

struct Tablets {
    string brand;
    string model;
    string color;
    float screen_size;
    int ram_size;
    int storage_size;
    int disc;
    double price_ori;
    double price_sales;
};

void createRec(Tablets *t, int size);
double calcSPrice(Tablets *t, int m);
void sortAsc(Tablets *t, int size);
void storeRec(Tablets *t, int size);
void display();

int main()
{
    int size = TOTAL_TABS;
    Tablets tabs[size];

    createRec(tabs, size);
    sortAsc(tabs, size);
    storeRec(tabs, size);
    cin >> tabFilename;
    display();

    return 0;
}

void createRec(Tablets *t, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "\nEnter brand name: "; cin >> t[i].brand;
        cout << "Enter model name: "; cin >> t[i].model;
        cout << "Enter color name: "; cin >> t[i].color;
        cout << "Enter size of screen: "; cin >> t[i].screen_size;
        cout << "Enter size of ram name: "; cin >> t[i].ram_size;
        cout << "Enter size of storage: "; cin >> t[i].storage_size;
        cout << "Enter discount rate: "; cin >> t[i].disc;
        cout << "Enter original price: "; cin >> t[i].price_ori;
        t[i].price_sales = calcSPrice(t, i);
    }
}

double calcSPrice(Tablets *t, int m) {
    return (t[m].price_ori - (t[m].price_ori * t[m].disc / 100.0));
}

void sortAsc(Tablets *t, int size) {
    int minIdx;
    // using insertion sort to sort Tablets based on price_sales
    for (int i = 0; i < size - 1; ++i) {
        minIdx = i;
        for (int j = i + 1; j < size; ++j) {
            if (t[j].price_sales < t[minIdx].price_sales) {
                // swap brand
                swap(&t[minIdx].brand, &t[j].brand);
                // swap model
                swap(&t[minIdx].model, &t[j].model);
                // swap color
                swap(&t[minIdx].color, &t[j].color);
                // swap screen_size
                swap(&t[minIdx].screen_size, &t[j].screen_size);
                // swap ram_size
                swap(&t[minIdx].ram_size, &t[j].ram_size);
                // swap storage_size
                swap(&t[minIdx].storage_size, &t[j].storage_size);
                // swap disc
                swap(&t[minIdx].disc, &t[j].disc);
                // swap price_ori
                swap(&t[minIdx].price_ori, &t[j].price_ori);
                // swap price_sales
                swap(&t[minIdx].price_sales, &t[j].price_sales);
            }
        }
    }
}

void storeRec(Tablets *t, int size) {
    cout << "Please enter the name of the file you wish to open" << endl;
    cin >> tabFilename;
    // save data to tabFilename
    ofstream writeTF(tabFilename.c_str());
    if (!writeTF.fail()) {
        for (int i = 0; i < size; ++i) {
            writeTF << t[i].brand << ' '
                    << t[i].model << ' '
                    << t[i].color << ' '
                    << t[i].screen_size << ' '
                    << t[i].ram_size << ' '
                    << t[i].storage_size << ' '
                    << t[i].disc << ' '
                    << t[i].price_ori << ' '
                    << t[i].price_sales << "\n";
        }
    }
    writeTF.close();
}

void display() {
    ifstream readTF(tabFilename.c_str());
    if (!readTF.fail()) {
        cout << "Your file has been successfully opened for reading." << endl;
        Tablets temp;
        string tempStr;
        cout << setw(15) << left << "Brand"
             << setw(20) << left << "Model"
             << setw(15) << left << "Color"
             << setw(11) << left << "Screen"
             << setw(7) << left << "RAM"
             << setw(11) << left << "Storage"
             << setw(11) << left << "Discount"
             << setw(11) << left << "Ori.Price"
             << setw(11) << left << "SalesPrice"
             << endl;
        for (int i = 0; i < TOTAL_TABS; ++i){
            readTF >> temp.brand >> temp.model >> temp.color
                   >> temp.screen_size >> temp.ram_size >> temp.storage_size
                   >> temp.disc >> temp.price_ori >> temp.price_sales;
            cout << setw(15) << left << temp.brand
                 << setw(20) << left << temp.model
                 << setw(15) << left << temp.color
                 << setw(11) << left << temp.screen_size
                 << setw(7) << left << temp.ram_size
                 << setw(11) << left << temp.storage_size
                 << setw(11) << left << temp.disc
                 << setw(11) << left << temp.price_ori
                 << setw(11) << left << temp.price_sales
                 << endl;
        }
    }
    readTF.close();
}