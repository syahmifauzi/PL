#include <iostream>
using namespace std;

int main()

{
    char inMsia, inWestMsia;
    float cost;

    cout << "Are you in Malaysia? (y/n): ";
    cin >> inMsia;

    switch (inMsia) {
        case 'Y':
        case 'y':
            cout << "Are you in West Malaysia? (y/n): ";
            cin >> inWestMsia;
            switch (inWestMsia) {
                case 'Y':
                case 'y': cost = 7.00;
                          break;
                case 'N':
                case 'n': cost = 10.00;
                          break;
            }
            break;
        case 'N':
        case 'n':
            cost = 30.00;
            break;
        default:
            cout << "Invalid Input!" << endl;
    }

    if (inMsia == 'y' || inMsia == 'Y' || inMsia == 'n' || inMsia == 'N')
        cout << "Shipping Cost = RM" << cost << endl;

    return 0;
}
