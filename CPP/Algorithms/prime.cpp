#include <iostream>
using namespace std;

bool isPrimeNumber(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int N;

    cout << "Prime Number up to: "; cin >> N;

    for (int i = 2; i <= N; i++)
        if (isPrimeNumber(i))
            cout << i << " ";

    cout << endl;

    return 0;
}