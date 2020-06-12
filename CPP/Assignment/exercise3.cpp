/*
 * Muhammad Syahmi Fathimi bin Ahmad Fauzi
 * 1715845
 * Muhammad Farhan bin Azhar
 * 1718485
 */
#include <iostream>
using namespace std;

int main()
{
    int totalBottle;
    float bottleLitres, oilLitres, bottleCost, bottleProfit, totalCost, totalProfit;

    bottleLitres = 2.45;
    bottleCost = 15.55;
    bottleProfit = 3.05;

    cout << "Enter the estimated total amount of cooking oil produced per day (in Litre): ";
    cin >> oilLitres;

    totalBottle = oilLitres / bottleLitres;
    cout << "Number of bottles produced: " << totalBottle << endl;

    totalCost = totalBottle * bottleCost;
    cout << "Total cost: RM" << totalCost << endl;

    totalProfit = bottleProfit * totalBottle;
    cout << "Total profit: RM" << totalProfit << endl;

    return 0;
}
