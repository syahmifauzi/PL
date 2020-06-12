#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            num += 5;
            cout << num << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            cout << j * 5 << " ";
        }
        cout << endl;
    }
}
