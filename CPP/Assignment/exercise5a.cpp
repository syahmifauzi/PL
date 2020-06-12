#include <iostream>
using namespace std;

int main()
{
    int i;
    char ans;
    float curr_mileage, prev_mileage, gallons, mpg;

    cout << "Enter the Current Mileage: ";
    cin >> curr_mileage;

    prev_mileage = 0;
    gallons = 1.0;
    i = 0;

    while (true) {
        mpg = (curr_mileage - prev_mileage) / gallons;
        prev_mileage = curr_mileage;
       
        if (i == 0)
            cout << "Mile Per Gallon: -" << endl;
        else {       
            cout << "Mile Per Gallon: " << mpg << endl;
            cout << "Do you want to continue? (y/n) ";
            cin >> ans;
            if (ans == 'N' || ans == 'n')
                break;
        }
        cout << "Enter the Current Mileage: ";
        cin >> curr_mileage;
        cout << "Enter the Current Gallon: ";
        cin >> gallons;

        i++;
    }

    return 0;
}
