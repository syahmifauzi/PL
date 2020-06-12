#include <iostream>
using namespace std;

int main()
{
    int ctry_1, ctry_2, ctry_3, ctry_4, ctry_5,
        avg, temp_ctry;

    cout << "Enter medal for country 1 : "; cin >> ctry_1;
    cout << "Enter medal for country 2 : "; cin >> ctry_2;
    cout << "Enter medal for country 3 : "; cin >> ctry_3;
    cout << "Enter medal for country 4 : "; cin >> ctry_4;
    cout << "Enter medal for country 5 : "; cin >> ctry_5;

    avg = (ctry_1 + ctry_2 + ctry_3 + ctry_4 + ctry_5) / 5;

    cout << "Average medal won = " << avg << endl;
    cout << endl << "MEDALS (each @ represents 10 medals)" << endl;

    for (int i = 1; i < 6; i++) {
        cout << "Country " << i << " : ";

        // condition to get the value for each country
        if (i == 1) temp_ctry = ctry_1;
        else if (i == 2) temp_ctry = ctry_2;
        else if (i == 3) temp_ctry = ctry_3;
        else if (i == 4) temp_ctry = ctry_4;
        else if (i == 5) temp_ctry = ctry_5;

        // loop j times for particular country set above
        for (int j = 0; j < temp_ctry / 10; j++)
            cout << "@ ";
        cout << endl;
    }

    return 0;
}
