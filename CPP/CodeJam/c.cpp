#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int N, a[100000], total = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        total += a[i];
    }

    sort(a, a+N);
    cout << max((int)ceil(total / (N-1.0)),a[N-1]) << endl;

    return 0;
}
