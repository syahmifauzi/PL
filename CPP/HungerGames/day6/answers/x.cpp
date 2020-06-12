#include <iostream>
#include <string>
using namespace std;

int maxCommonPrefix(string &a, string &b, int sizeA, int sizeB) {
    int tPrifix = 0;
    int min_size = sizeA < sizeB ? sizeA : sizeB;
    int foundIdx = 0;
    if (sizeA > sizeB) {
        for (int i = 0; i < min_size; ++i) {
            foundIdx = a.find(b[i]);
            if (b[i] == a[foundIdx] && foundIdx < sizeA) {
                ++tPrifix;
                a[foundIdx] = '-';
            }
        }
    } else {
        for (int i = 0; i < min_size; ++i) {
            foundIdx = b.find(a[i]);
            if (a[i] == b[foundIdx] && foundIdx < sizeB) {
                ++tPrifix;
                b[foundIdx] = '-';
            }
        }
    }
    return tPrifix;
}

int main()
{
    int T;
    string a, b;

    cin >> T;

    int *tCases = new int[T];

    for (int i = 0; i < T; ++i) {
        cin >> a >> b;
        tCases[i] = maxCommonPrefix(a, b, a.length(), b.length());
    }

    for (int i = 0; i < T; ++i)
        cout << tCases[i] << endl;

    delete[] tCases;

    return 0;
}
