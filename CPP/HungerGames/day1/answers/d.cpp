#include <iostream>
using namespace std;

#define MAX 2570

int multiply(int x, int fac[], int fac_size) {
    int carry = 0; // initialize carry

    for (int i = 0; i < fac_size; ++i) {
        fac[i] *= x;
        fac[i] += carry;
        carry = fac[i] / 10;
        fac[i] %= 10;
    }

    while (carry) {
        fac[fac_size] = carry % 10;
        carry /= 10;
        ++fac_size;
    }

    return fac_size;
}

void factorial(int n) {
    int fac[MAX];

    // initialize result
    fac[0] = 1;
    int fac_size = 1;

    for (int x = 2; x <= n; ++x)
        fac_size = multiply(x, fac, fac_size);
    
    int trail_zeros = 0;
    for (int i = 0; i < fac_size; ++i) {
        if (fac[i] == 0) {
            ++trail_zeros;
            if (fac[i+1] != 0)
                break;
        }
    }
    
    cout << trail_zeros << endl;
}

int main()
{
    int n;
    cin >> n;
    factorial(n);

    return 0;
}
