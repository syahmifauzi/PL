#include <iostream>
using namespace std;

int main()
{
    int num = 3, repeat;

    for (repeat = 0; num >= 3 && num <= 30; repeat++) {
        cout << "Enter a number divisible by 3: ";
        cin >> num;

        if (num % 3 == 0)
            cout << "The number is divisible by 3\n\n";
        else
            cout << "The number must be divisible by 3\n\n";
    }

    cout << "The loop executed " << repeat << " times.\n";

    return 0;
}
