#include <iostream>
using namespace std;

int main()
{
    int sum, number;
    bool isDone = false;

    sum = 0;
    while (!isDone) {
        cout << "Enter a number: ";
        cin >> number;
        if (number > 0)
            sum += number;
        else
            isDone = true;
    }

    cout << "The sum is " << sum << endl;

    return 0;
}
