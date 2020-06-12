#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int totalItems;
    float commission, addCommission, earnCommission;

    commission = 25.78;
    addCommission = 6.42;

    cout << "Enter total number of items sold: ";
    cin >> totalItems;

    if (totalItems <= 20)
        earnCommission = commission;
    else if (totalItems <= 25)
        earnCommission = commission + addCommission;
    else if (totalItems <= 30)
        earnCommission = commission + addCommission * 2;
    else if (totalItems <= 35)
        earnCommission = commission + addCommission * 3;
    else
        earnCommission = commission + addCommission * 4;

    cout << "Total commission earned: RM"
         << setw(10) << fixed << right
         << setprecision(4) << earnCommission << endl;

    return 0;
}
