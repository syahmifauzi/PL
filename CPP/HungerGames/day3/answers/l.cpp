#include <iostream>
#include <cmath>
using namespace std;

typedef unsigned long long int u64;

// non-negative no. means zero and positive no.
u64 possibleTotalCups(u64 cups) {
    u64 tCups = floor(sqrt(cups));
    u64 i, j;
    for (i = tCups - 1, j = tCups; i < cups; ++i, ++j)
        if ((i+(i*i)) <= cups && (j+(j*j)) > cups)
            return i;
}

int main()
{
    int T;
    
    cin >> T;

    u64 *a = new u64[T];
    u64 score = 0;

    for (int i = 0; i < T; ++i)
        cin >> a[i];

    for (int i = 0; i < T; ++i) {
        score += possibleTotalCups(a[i]);
        cout << score << endl;
    }

    delete[] a;

    return 0;
}
