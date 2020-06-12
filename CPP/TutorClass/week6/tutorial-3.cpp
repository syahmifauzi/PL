#include <iostream>
using namespace std;

int fact(int n)
{
    if (n < 0) return 0;
    int ans = 1; // start case for multiply

    // iterative way
    for (int i = 1; i <= n; i++) {
        ans *= i; // multiply each sequence 1..n
    }

    return ans;
}

int main()
{
    int n;
    cout << "n =  ";
    cin >> n;

    cout << n << "! = " << fact(n) << endl;

    return 0;
}
