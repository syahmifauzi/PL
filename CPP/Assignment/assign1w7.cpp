#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int loop = 1,
        startDay = 6,
        day = 1;

    cout << "Su  Mo  Tu  We  Th  Fr  Sa" << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (loop >= startDay) {
                if (day <= 31)
                    cout << setw(4) << left << day;
                day++;
            } else {
                cout << setw(4) << "";
            }
            loop++;
        }
        cout << endl;
    }

    return 0;
}
