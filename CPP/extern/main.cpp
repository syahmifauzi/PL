#include <iostream>
#include "convertOunce.h"
#include "randLetters.h"
using namespace std;

int main()
{
    double liter;

    cout << "Enter liter: "; cin >> liter;
    cout << liter << " is equal to " << calcOunce(liter) << endl;

    cout << endl;
    randLetters();

    return 0;
}
