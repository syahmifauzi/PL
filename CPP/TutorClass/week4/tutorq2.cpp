#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float T;

    while (cin >> T) {
        int total = 0, n;
        for (int i = 0; i < T; i++) {
            cin >> n;
            total += n;
        }
        cout << fixed << setprecision(2)
             << total / T << endl;
    }

    return 0;
}

