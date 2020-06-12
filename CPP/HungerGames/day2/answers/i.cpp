#include <iostream>
using namespace std;

int main()
{
    int m;

    cin >> m;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m * 2 + 1; ++j) {
            if (j == m) {
                cout << ' ';
            } else if (j != 0 && j != m-1 && j != m+1 && j != m*2) {
                if ((i == m-1 && j < m) || (i == 0 && j > m))
                    cout << '*';
                else
                    cout << ' ';
            } else {
                cout << '*';
            }
        }
        cout << '\n';
    }

    return 0;
}