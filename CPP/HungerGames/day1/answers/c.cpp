#include <iostream>
#include <string>
using namespace std;

bool isPossible(string s) {
    int tMs = 0, tFs = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'M') ++tMs;
        if (s[i] == 'F') ++tFs;
    }
    switch (tMs) {
        case 3: case 4: case 6: case 7: case 10:
            return true;
    }
    switch (tFs) {
        case 3: case 4: case 6: case 7: case 10:
            return true;
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    string *S = new string[T];

    for (int i = 0; i < T; ++i)
        cin >> S[i];

    for (int i = 0; i < T; ++i)
        cout << (isPossible(S[i]) ? "Yes" : "No") << endl;

    delete[] S;

    return 0;
}
