#include <iostream>
#include <string>
using namespace std;

bool canPrepare(string s) {
    int lvl[5] = {0};
    int sum = 0;
    for (int i = 0; i < s.length(); ++i) {
        switch (s[i]) {
            case 'A': sum += 1; ++lvl[0]; break;
            case 'B': sum += 2; ++lvl[1]; break;
            case 'C': sum += 3; ++lvl[2]; break;
            case 'D': sum += 4; ++lvl[3]; break;
            case 'E': sum += 5; ++lvl[4]; break;
        }
    }

    if (sum < 15 || sum > 25)
        return false;
    if (lvl[0] == 0) // A == 0
        return false;
    if (lvl[0] < 3 && lvl[1] == 0) // B == 0
        return false;
    if (lvl[1] == 0 && lvl[2] == 0) // C == 0
        return false;
    if (lvl[3] == 0) // D == 0
        if (!(lvl[0] > 1 && lvl[2] > 0) || !(lvl[1] > 1))
            return false;
    if (lvl[4] == 0) // E == 0
        if (!(lvl[0] > 1 && lvl[3] > 0) || !(lvl[1] > 0 && lvl[2] > 0))
    
    if (lvl[0] > 4 || lvl[1] > 4 || lvl[2] > 3 ||
        lvl[3] > 3 || lvl[4] > 3)
            return false;

    return true;    
}

int main()
{
    int T;

    cin >> T;

    int *totalTest = new int[T];
    string S;

    for (int i = 0; i < T; ++i) {
        cin >> S;
        totalTest[i] = canPrepare(S);
    }

    for (int i = 0; i < T; ++i)
        cout << (totalTest[i] ? "YES" : "NO") << endl;

    delete[] totalTest;

    return 0;
}