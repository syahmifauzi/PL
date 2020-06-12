#include <iostream>
#include <string>
#include <bitset>
using namespace std;

bool isPrimeNumber(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

bool isPalindrome(bitset<21> b) {
    int i;
    for (i = b.size(); i > 0; --i)
        if (b[i] == 1)
            break;
    
    int size = (i + 1) / 2;
    for (int j = 0; j < size; --i, ++j)
        if (b[i] != b[j] && i != j)
            return false;

    return true;
}

string bitsToString(int n) {
    string s = bitset<21>(n).to_string('0', '1');

    int i;
    for (i = 0; i < s.length(); ++i)
        if (s[i] == '1')
            break;
    
    return s.substr(i);
}

string nextPalPrime(bitset<21> b) {
    int n = b.to_ulong();

    if (isPrimeNumber(n) && isPalindrome(n))
        return bitsToString(n);

    do {
        while (!isPrimeNumber(++n));
    } while (!isPalindrome(n));

    return bitsToString(n);
}

int main()
{
    // tested with max P.N. = 111111110111011111111
    bitset<21> b;

    while (cin >> b) {
        cout << nextPalPrime(b) << endl;
    }

    return 0;
}