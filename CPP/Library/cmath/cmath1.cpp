#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.142
using namespace std;

int main()
{
    double volume, r, h;
    // const double PI = 3.142;

    cout << "Enter r and h of a cylinder separated by space: ";
    cin >> r >> h;

    volume = PI * pow(r, 2.0) * h;

    cout << "The volume of the cylinder is " << setw(10)
         << fixed << setprecision(2) << right << volume << endl;

    //int(volume); // compile-time cast
    // run-time cast

    return 0;
}
