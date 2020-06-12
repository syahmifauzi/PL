#include <iostream>
#include <cmath>
using namespace std;

void perfectSquare(int x) {
    // can use ceilf() or floorf()
    bool isPF = (ceilf(sqrt(x)) == sqrt(x) ? 1 : 0);
    cout << x << " is "
         << (isPF ? "a" : "NOT a")
         << " Perfect Square!" << endl;
}

int main()
{
    perfectSquare(25);
    perfectSquare(40);

    return 0;
}