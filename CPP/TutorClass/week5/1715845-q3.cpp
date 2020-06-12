#include <iostream>
using namespace std;

int main()
{
    int N;
    bool isPrime;

    while (cin >> N) {
        isPrime = true;
        for (int i = 2; i < N && isPrime; i++) {
            if (N % i == 0)
                isPrime = false;
        }
        if (isPrime)
            cout << N << " is a prime number" << endl;
        else
            cout << N << " is not a prime number" << endl;
    }

    return 0;
}
