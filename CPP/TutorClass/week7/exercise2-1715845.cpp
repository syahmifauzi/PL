#include <iostream>
using namespace std;

int main()
{
    int N, a[30];
    bool isDecreasing = false;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int j = 0; j < N; j++) {
        if (a[j+1] < a[j]) {
            isDecreasing = true;
            break;
        }
    }

    if (isDecreasing)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}
