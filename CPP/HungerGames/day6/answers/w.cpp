#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int T, a, b, c;

    cin >> T;

    int *tCases = new int[T];

    for (int i = 0; i < T; ++i) {
        scanf("%d%d%d", &a, &b, &c);
        tCases[i] = (a < b ? (a < c ? 1 : 3) : (b < c ? 2 : 3));
    }

    for (int i = 0; i < T; ++i) {
        switch(tCases[i]) {
            case 1: cout << "First" << endl; break;
            case 2: cout << "Second" << endl; break;
            case 3: cout << "Third" << endl; break;
        }
    }

    delete[] tCases;

    return 0;
}
