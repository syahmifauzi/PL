#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(3) << 5 << endl
         << setw(3) << 5.2 << endl
         << setw(3) << 132 << endl
         << setw(2) << 212 << endl
         << showpoint << 52.123456 << endl
         << fixed << 5.1 << endl
         << setw(2) << setiosflags(ios::fixed) << 23.4 << endl
         << setw(7) << setiosflags(ios::fixed) << setprecision(3)
         << 53.456 << endl
         << "---\n";

    return 0;
}
