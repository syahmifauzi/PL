/*
 * Muhammad Syahmi Fathimi bin Ahmad Fauzi 1715845
 * Muhammad Farhan bin Azhar 1718485
 **/
#include <iostream>
using namespace std;

const int SIZE = 5;

double findMin(double sales[SIZE]) {
    double min = sales[0];
    for (int i = 1; i < SIZE; i++)
        if (min > sales[i])
            min = sales[i];
    return min;
}

double findTotal(double sales[SIZE]) {
    double totalSales = 0;
    for (int i = 0; i < SIZE; i++)
        totalSales += sales[i];
    return totalSales;
}

double findAvg(double total) {
    return (total / SIZE);
}

void calcSales(double sales[SIZE], string seller[SIZE]) {
    double total, avg, min;

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter your name and sales separated by space: ";
        cin >> seller[i] >> sales[i];
    }

    for (int i = 0; i < SIZE; i++) {
        cout << "Seller & Sales: "
             << seller[i] << " " << sales[i] << endl;
    }

    total = findTotal(sales);
    avg = findAvg(total);
    min = findMin(sales);

    cout << "Total Sales: " << total << endl;
    cout << "Average Sale: " << avg << endl;
    cout << "Minimum Sale: " << min << endl;
}

int main()
{
    double sales[SIZE];
    string seller[SIZE];
    calcSales(sales, seller);

    return 0;
}
