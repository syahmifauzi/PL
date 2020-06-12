#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float volume, r, pi = 3.141592;

    cout << "Enter the radius of the sphere (cm): ";
    cin >> r;

    volume = 4 * pi * r * r * r / 3;

    cout << "The volume of the sphere is : "
         << setw(10) << fixed << setiosflags(ios::right) // or left
         << setprecision(4) << volume << endl;

    return 0;
}
