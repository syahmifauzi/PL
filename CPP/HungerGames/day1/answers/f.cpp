#include <iostream>
using namespace std;

typedef unsigned long long int u64;

int main()
{
    u64 Y;

    cin >> Y;

    u64 nume = 1;
    u64 deno = 1;
    u64 Yc = Y;

    // get the values for the formula
    int size = 0;
    while (Yc > 0) {
        nume *= 10;
        deno += nume;
        Yc /= 10;
        ++size;
    }
    nume /= 10;
    deno /= 10;
    
    // formula to find X (the order is important ;/)
    u64 X; // tested with 999999999999999999
    X = (long double)Y / (long double)deno * (long double)nume + 100;

    // cout << "Y " << Y << endl;
    // cout << "X " << X << endl;

    int totalSolution = 0;
    u64 currentSolution;

    u64 sum, Xc = X;
    do {
        sum = 0;
        while (Xc > 0) {
            sum += Xc;
            Xc /= 10;
        }
        // cout << "sum " << sum << endl;
        if (sum == Y) {
            ++totalSolution;
            currentSolution = X;
        }
        if (sum >= Y) Xc = --X;
        else break;
    } while (true);

    if (totalSolution == 0)
        cout << "-1" << endl;
    else if (totalSolution == 1)
        cout << currentSolution << endl;
    else
        cout << "ManySolutions" << endl;

    return 0;
}