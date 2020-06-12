#include <iostream>
using namespace std;

main()
{
    float flourWeight, flourCost, flourProfit;
    float totalFlour, totalCost, totalProfit;
    int totalPacks;

    flourWeight = 1.55;
    flourCost = 1.35;
    flourProfit = 0.65;

    cout << "Enter total amount of flour produced (in kg): ";
    cin >> totalFlour;

    totalPacks = totalFlour / flourWeight;
    totalCost = flourCost * totalPacks;
    totalProfit = flourProfit * totalPacks;

    cout << "Total packs produced: " << totalPacks << endl
         << "Total cost: RM" << totalCost << endl
         << "Total profit: RM" << totalProfit << endl;

    return 0;
}
