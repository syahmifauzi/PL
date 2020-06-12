#include <iostream>
using namespace std;

int main()
{
    int totalPat, totalBP = 3;

    cout << "Enter total number of patient: ";
    cin >> totalPat;
    
    int *bp = new int[3][totalBP];

    for (int i = 0; i < totalPat; i++) {
        cout << "Patient " << i + 1 << ": ";
        for (int j = 0; j < totalBP; j++) {
            cin >> bp[i][j];
        }
    }

    for (int i = 0; i < totalPat; i++) {
        cout << "Patient " << i + 1 << ": ";
        for (int j = 0; j < totalBP; j++) {
            cout << bp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}