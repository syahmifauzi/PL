#include <iostream>
using namespace std;

int main()
{
    int N, K, M, counter = 0;

    cin >> N >> K;

    while (N != K) {
        if (N * 1 < K) {
            N *= 2;
            counter++;
        } else if (N + 1 < K) {
            N += 1;
            counter++;
        } else if (N - 1 < K) {
            N -= 1;
            counter++;
        }
    }

   cout << counter << endl;

   return 0;
}
