#include <iostream>
using namespace std;

int gcdMethod1(int a, int b) {
    if (a == 0)
        return b;
    return gcdMethod1(b%a, a);
}

int gcdMethod2(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int gcdMethod3(int a, int b) {
    int temp, gcd;
    // swap a and b if b > a
    if (b > a) {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = 1; i <= b; i++)
        if (a % i == 0 && b % i == 0)
            gcd = i;
    return gcd;
}

int lcmMethod1(int a, int b) {
    int max = (a > b)? a : b;
    do {
        if (max % a == 0 && max % b == 0)
            return max;
        max++;
    } while (1);
}

int lcmMethod2(int a, int b) {
    int gcd = gcdMethod1(a, b);
    return ((a * b) / gcd);
}

int main()
{
    int N1, N2;

    do { 
        cout << "Enter two numbers: ";
        cin >> N1 >> N2;

        // Display GCD
        printf("gcdMethod1(%d, %d) = %d\n", N1, N2, gcdMethod1(N1, N2));
        printf("gcdMethod2(%d, %d) = %d\n", N1, N2, gcdMethod2(N1, N2));
        printf("gcdMethod3(%d, %d) = %d\n\n", N1, N2, gcdMethod3(N1, N2));
        // Display LCM
        printf("lcmMethod1(%d, %d) = %d\n", N1, N2, lcmMethod1(N1, N2));
        printf("lcmMethod2(%d, %d) = %d\n\n", N1, N2, lcmMethod2(N1, N2));
    } while (1);

    return 0;
}