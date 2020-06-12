#include <iostream>
using namespace std;

int indexOfNextMinPrice(int *p, int curr_idx, int size) {
    for (int i = curr_idx + 1; i < size; ++i)
        if (p[i] < p[curr_idx]) // TODO: < or <= ?
            return i;
    return curr_idx;
}

int minMoneyNeeded(int *a, int *p, int size) {
    // a:kg, p:price/kg
    int totalMoney = 0;
    int usedIdx = 0;
    int nextMinIdx;

    // find it at least once
    nextMinIdx = indexOfNextMinPrice(p, usedIdx, size);
    
    for (int i = 0; i < size; ++i) {
        if (i == nextMinIdx) {
            usedIdx = i;
            nextMinIdx = indexOfNextMinPrice(p, usedIdx, size);
        }
        totalMoney += p[usedIdx] * a[i];
    }

    return totalMoney;
}

int main()
{
    int n;

    cin >> n;

    int *a = new int[n];
    int *p = new int[n];

    for (int i = 0; i < n; ++i)
        cin >> a[i] >> p[i];

    cout << minMoneyNeeded(a, p, n) << endl;

    delete[] a;
    delete[] p;

    return 0;
}
