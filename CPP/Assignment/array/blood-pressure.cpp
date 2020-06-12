#include <iostream>
using namespace std;

#define R 4
#define C 3

int findMinLevel(int pat[R][C], int curr_pat) {
    int min = pat[curr_pat][0];

    for (int i = 0; i < C; i++) {
        if (min > pat[curr_pat][i])
            min = pat[curr_pat][i];
    }

    return min;
}

int main()
{
    int pat[R][C];

    // Get the input BP from user
    cout << "Enter blood pressure level for:" << endl;
    for (int i = 0; i < R; i++) {
        cout << "Patient " << i + 1 << ": ";
        for (int j = 0; j < C; j++) {
            cin >> pat[i][j];
        }
    }

    // Display the BP and Minimum BP
    cout << "Blood Pressure Level:" << endl;
    for (int i = 0; i < R; i++) {
        cout << "Patient " << i + 1 << ": ";
        for (int j = 0; j < C; j++) {
            cout << pat[i][j] << " ";
        }
        cout << "\tMin BP: " << findMinLevel(pat, i) << endl;
    }

    return 0;
}