#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.142;
    float R;

    while (cin >> R) {
        cout << fixed << setprecision(2)
             << "Radius: " << R << endl
             << "Area: " << PI * pow(R, 2.0) << endl
             << "Circumference: " << 2 * PI * R << endl;
    }

    return 0;
}
