#include <iostream>
#include <string>
using namespace std;

int totalChar(string s, char c) {
    int totalCh = 0;
    for (int i = 0; i < s.length(); ++i)
        if (s[i] == c)
            ++totalCh;
    return totalCh;
}

bool isPairMatched(char c1, char c2) {
    if (c1 == '(' && c2 == ')')
        return true;
    else if (c1 == '[' && c2 == ']')
        return true;
    else
        return false;
}

void changeOneToMatched(int left, char &c1, int mid, char &c2, int right) {
    if (mid % 2 == 0 && (left + right) % 2 == 0) {
        if(c1 == '(' && c2 != ')') c2 = ')';
        else if(c1 == '[' && c2 != ']') { c2 = ']'; }
        else if(c1 != '(' && c2 == ')') { c1 = '('; }
        else if(c1 != '[' && c2 == ']') { c1 = '['; }
        else if(c1 == ')' && c2 == '(') { c1 = '('; c2 = ')'; }
        else if(c1 == ']' && c2 == '[') { c1 = '['; c2 = ']'; }
    }
    // cout << left << ' ' << mid << ' ' << right << endl;
}

void findSolution(string s1) {
    if (s1.length() % 2 != 0) {
        cout << "-1" << endl;
        return;
    }

    string s2(s1);
    int size = s1.length();
    
    for (int i = 0; i < size / 2; ++i) {
        changeOneToMatched(i, s2[i], size-i-i, s2[size-i-1], i);
        // cout << s2 << endl;
    }

    for (int i = 0; i < size - 1; ++i) {
        if (s1[i] == s2[i] && s2[i+1] != s1[i+1]) {
            changeOneToMatched(i, s2[i], 0, s2[i+1], size-i+2);
            // cout << s2 << endl;
        }
    }

    // test1, odd, c1, even, c2, odd
    // test2, even, c1, even, c2, odd
    // test2, odd, c1, even, c2, even

    int totalChanges = 0;
    for (int i = 0; i < size; ++i) {
        if (s1[i] != s2[i])
            ++totalChanges;
    }
    cout << totalChanges << endl;


    // int timeTaken = 0;
    // for (int i = 0; i < s1.length(); ++i)
    //     if (s1[i] != s2[i])
    //         ++timeTaken;
    // cout << timeTaken << endl;

    // cout << "( " << totalChar(s1, '(') << endl
    //      << ") " << totalChar(s1, ')') << endl
    //      << "[ " << totalChar(s1, '[') << endl
    //      << "] " << totalChar(s1, ']') << endl;

    // if (timeTaken < minTime)
}

int main()
{
    string s;

    cin >> s;

    findSolution(s);
    
    return 0;
}