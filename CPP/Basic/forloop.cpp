#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (j % 2 == 0)
                cout << "*";
            else
                cout << "_";
        }
        cout << endl;
    }

    return 0;
}
