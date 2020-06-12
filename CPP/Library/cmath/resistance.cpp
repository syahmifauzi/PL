#include <iostream>
#include <cmath>
using namespace std;

int search(char c[10][7], int size, string b)
{
    for (int i = 0; i < size; i++) {
        if (b == c[i])
            return i;
    }

    return -1;
}

int main()
{
    char COLOR_CODES[10][7] = {
        "black", "brown", "red", "orange", "yellow",
        "green", "blue", "violet", "gray", "white"
    };
    char ans;
    string band_color, invalid_color;
    int subscript, invalid_subs;
    double resistance;

    do {
        cout << "Enter the colors of the resistor's three bands,"
                " beginning with the band nearest the end. Type the"
                " colors in lowercase letters only, NO CAPS." << endl;
        invalid_subs = 0;
        resistance = 0;
        for (int i = 0; i < 3; i++) {
            cout << "Band " << i + 1 << " => "; cin >> band_color;
            cin.ignore();
            subscript = search(COLOR_CODES, 10, band_color);
            if (subscript == -1) {
                invalid_subs = subscript;
                invalid_color = band_color;
            }
            if (i == 0)
                resistance = subscript * 10;
            else if (i == 1)
                resistance += subscript;
            else
                resistance *= (pow(10.0, subscript) / 1000);
        }

        if (invalid_subs == -1)
            cout << "Invalid color: " << invalid_color << endl;
        else
            cout << "Resistance value: " << resistance << " kilo-ohms" << endl;

        cout << "Do you want to decode another resistor"
                " (Type 'y' for yes, or 'n' for no)"
             << endl << "=> "; cin >> ans;
        cout << endl;
    } while (ans != 'n' && ans != 'N');

    return 0;
}
