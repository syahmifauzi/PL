#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N]; // dynamic array size
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    bool flag = true;

    for (int i = 1; i < N && flag; i++) {
        if (a[i-1] > a[i]) {
            flag = false;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}
