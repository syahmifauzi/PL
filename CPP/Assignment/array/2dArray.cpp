/*
 * Muhammad Syahmi Fathimi bin Ahmad Fauzi 1715845
 * Muhammad Farhan bin Azhar 1718485
 */
#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 5;
const int COLS = 3;

double calcProfitOrLost(double cost, double price) {
    return (price - cost);
}

int main()
{
    typedef string str[ROWS];
    str items = {"Fridge", "Air-conditioner", "Washing machine", "Television", "Oven"};
    double prices[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        cout << items[i] << endl;
        cout << "\tCost: "; cin >> prices[i][0];
        cout << "\tSelling Price: "; cin >> prices[i][1];        
    }

    cout << endl;
    cout << setw(15) << ""
         << setw(10) << right << "Cost"
         << setw(15) << right << "Selling Price"
         << setw(13) << right << "Profit/Lost" << endl;
    for (int i = 0; i < ROWS; i++) {
        cout << setw(15) << left << items[i];
        for (int j = 0; j < COLS; j++) {
            if (j == 2) prices[i][2] = calcProfitOrLost(prices[i][0], prices[i][1]);
            cout << setw(10) << right << prices[i][j];
            if (j == 2) cout << (prices[i][j] >= 0 ? " (Profit)": " (Lost)");
        }
        cout << endl;
    }

    return 0;
}