#include <iostream>
#include <string>
using namespace std;

bool searchLevel(string s, char *level, int idx) {
    int count = 0;
    for (int i = 0; i < s.length(); ++i)
        if (s[i] == level[idx])
            ++count;

    if (level[idx] == 'A' && count > 2) {
        cout << s << ": found A && A > 2" << endl;
        return true;
    } else if (count > 0) {
        cout << s << ": " << count << level[idx] << " > 0" << endl;
        // return true;
    } 
    
    if (level[idx] != 'A') {
        cout << s << endl;
        return searchLevel(s.erase(s.find(level[idx]), 1), level, idx - 1);
    }

    return false;
}

bool canPrepare(string s) {
    char level[] = {'A', 'B', 'C', 'D', 'E'};
    return searchLevel(s, level, 4);
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

    delete[] totalTest;

    return 0;
}