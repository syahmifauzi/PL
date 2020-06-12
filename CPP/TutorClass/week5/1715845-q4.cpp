// Anagram Program Checker
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int T, L1, L2;
    string S1, S2;

    cin >> T;

    for (int test = 0; test < T; test++) {
        cin >> S1 >> S2;

        L1 = S1.length();
        L2 = S2.length();

        if (L1 != L2) {
            cout << "False" << endl;
            continue;
        }
 
        // Sorting S1 & S2
        sort(S1.begin(), S1.end());
        sort(S2.begin(), S2.end());

        if (S1 == S2)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }

    return 0;
}
