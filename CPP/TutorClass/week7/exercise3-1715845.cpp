#include <iostream>
using namespace std;

int main()
{
    int N, Nr = 0;

    cin >> N;

    int i = N;
    while (N) {
        Nr *= 10;
        Nr += N % 10;
        N /= 10;
    }

    cout << i * Nr << endl;

    return 0;
}
