#include <iostream>
using namespace std;

int main()
{
    int N;

    while (cin >> N) {
        for (int i = 0; i <= N; i++) {
            if (i % 3 == 0 && i % 5 == 0)
                cout << "FizzBuzz";
            else if (i % 3 == 0)
                cout << "Fizz";
            else if (i % 5 == 0)
                cout << "Buzz";
            else
                cout << i;
            cout << endl;
        }
    }

    return 0;
}
