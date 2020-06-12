#include <iostream>
using namespace std;

void convertLiquid(double gallon, double pint)
{
    // 1 liter = 0.264172 gallon = 1000 milliliter
    // 1 gallon = 8 pints
    double liter = gallon * (1 / 0.264172);
    double ml = (pint * 1 / 8) * (1 / 0.264172) * 1000;

    cout << endl;
    cout << "Gallon\t\tLiter\t\tPint\t\tMilliliter" << endl
         << gallon << "\t\t"
         << liter << "\t\t"
         << pint << "\t\t"
         << ml << endl;

    return;
}

int main()
{
    double gallon, pint;

    do {
        cout << "Enter -1 to exit" << endl;
        cout << "Enter gallon = "; cin >> gallon;
        cout << "Enter pint = "; cin >> pint;

        convertLiquid(gallon, pint);

    } while (gallon != -1 && pint != -1);


    return 0;
}
