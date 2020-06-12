#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double ps;

    for (int i = 0; i < 1000000; ++i) {
        ps = i + i * i;
        if (sqrt(ps) == floor(sqrt(ps)))
            cout << i << ' ' << ps << ' ' << sqrt(ps) << ' ' << floor(sqrt(ps)) << endl;
    }

    return 0;
}