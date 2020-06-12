#include <iostream>
using namespace std;

int main()
{
    int A, B;
    bool isPrime;

    // PRIME NUMBER BETWEEN A & B
    while (cin >> A >> B) {
        for (int i = A; i <= B; i++) {
            isPrime = true;
            for (int j = 2; j < B; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) cout << i << "p ";
        }
    }

    return 0;
}
