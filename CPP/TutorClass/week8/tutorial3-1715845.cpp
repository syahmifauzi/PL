#include <iostream>
using namespace std;

int reverse(int N) {
    int Nr = 0;

    while (N > 0) {
        Nr *= 10;
        Nr += (N % 10);
        N /= 10;
    }

    return Nr;
}

int main()
{
    int N;

    cin >> N;

    cout << N * reverse(N) << endl;

    return 0;
}
