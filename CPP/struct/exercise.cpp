/*
 * Muhammad Syahmi Fathimi bin Ahmad Fauzi 1715845
 * Muhammad Farhan bin Azhar 1718485
 */
#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 5;

struct Items {
    string name;
    double cost;
    double price;
    double profit_lost;
};

double calcProfitOrLost(Items item[], int i) {
    return (item[i].price - item[i].cost);
}

int main()
{
    Items item[ROWS] = {{"Fridge"},
                        {"Air-conditioner"},
                        {"Washing machine"},
                        {"Television"},
                        {"Oven"}};

    for (int i = 0; i < ROWS; i++) {
        cout << item[i].name << endl;
        cout << "\tCost: "; cin >> item[i].cost;
        cout << "\tSelling Price: "; cin >> item[i].price;        
    }

    cout << endl;
    cout << setw(15) << ""
         << setw(10) << right << "Cost"
         << setw(15) << right << "Selling Price"
         << setw(13) << right << "Profit/Lost" << endl;
    for (int i = 0; i < ROWS; i++) {
        cout << setw(15) << left << item[i].name;
        cout << setw(10) << right << item[i].cost;
        cout << setw(15) << right << item[i].price;
        
        item[i].profit_lost = calcProfitOrLost(item, i);
        
        cout << setw(15) << right
             << (item[i].profit_lost >= 0 ? " (Profit)": " (Lost)")
             << endl;
    }

    return 0;
}