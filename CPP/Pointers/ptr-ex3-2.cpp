#include <iostream>
using namespace std;

#define R 4
#define C 3

int findMinLevel(int bp[R][C]) {
    int min = bp[R][0];
    for (int i = 0; i < C; i++)
        if (min > bp[R][i])
            min = bp[R][i];
    return min;
}

int main()
{
    int bp[R][C];

    for (int i = 0; i < R; i++) {
        cout << "Patient " << i + 1 << ": ";
        for (int j = 0; j < C; j++) {
            cin >> *(*(bp + i) + j);
        }
    }

    cout << endl;

    for (int i = 0; i < R; i++) {
        cout << "Patient " << i + 1 << ": ";
        for (int j = 0; j < C; j++) {
            cout << *(*(bp + i) + j) << " ";
        }
        cout << endl;
    }

    return 0;
}