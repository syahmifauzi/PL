#include <iostream>
using namespace std;

struct Fraction {
    int nume;
    int deno;
    double frac;
};

void printFraction(Fraction *f, int size) {
    cout << "All Fractions" << endl;
    for (int i = 0; i < size; ++i) {
        cout << f[i].nume << '/'
             << f[i].deno << " ---- "
             << f[i].frac << endl;
    }
}

void lowestFrac(Fraction *f, int size) {
    int minIdx = 0;
    for (int i = 0; i < size; ++i)
        if (f[minIdx].frac > f[i].frac)
            minIdx = i;
    cout << "Lowest Fraction\n"
         << f[minIdx].nume << '/'
         << f[minIdx].deno << " ---- "
         << f[minIdx].frac << endl;
}

int main()
{
    int T;
    cin >> T;
    
    Fraction *fracPtr = new Fraction[T];

    for (int i = 0; i < T; ++i) {
        cin >> fracPtr[i].nume >> fracPtr[i].deno;
        fracPtr[i].frac = (double)fracPtr[i].nume / fracPtr[i].deno;
    }

    printFraction(fracPtr, T);
    lowestFrac(fracPtr, T);

    delete[] fracPtr;

    return 0;
}