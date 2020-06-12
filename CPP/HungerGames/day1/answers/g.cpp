#include <iostream>
using namespace std;

int main()
{
    int X, divisors = 0;

    cin >> X;

    for (int i = 1; i <= X; ++i)
        if (X % i == 0)
            ++divisors;
    
    cout << (divisors == 2 ? "Yes" : "No") << endl;

    return 0;
}
