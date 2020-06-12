#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inMsia, inWestMsia;
    float cost;

    cout << "Are you in Malaysia? (yes/no): ";
    cin >> inMsia;

    if (inMsia == "yes") {
        cout << "Are you in West Malaysia? (yes/no): ";
        cin >> inWestMsia;
        if (inWestMsia == "yes")
            cost = 7.00;
        else
            cost = 10.00;
    } else {
        cost = 30.00;
    }

    cout << "Shipping Cost = RM" << cost << endl;

    return 0;
}
