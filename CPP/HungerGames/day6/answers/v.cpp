#include <iostream>
#include <string>
using namespace std;

bool isAlmostPalindrome(string &s) {
    char mid, ch[4];
    int size = s.length();
    int count = 0;
    int idx = 0;
    for (int i = 0; i < size / 2; ++i) {
        if (s[i] != s[size-i-1] && i != size-i-1) {
            ch[idx] = s[i];
            ch[3-idx] = s[size-i-1];
            ++idx;
            ++count;
            if (count > 2) return false;
        }
    }

    if (count == 0)
        return true;

    cout << mid << endl;
    cout << size / 2 << endl;
    cout << count << endl;
    cout << ch[0] << ' ' << ch[1] << ' '
         << ch[2] << ' ' << ch[3] << endl;

    // for even no
    if (count == 2) {
        bool itIsAlmost = false;
        for (int i = 1; i < 4; ++i)
            if (ch[0] == ch[i] || ch[1] == ch[i+1])
                itIsAlmost = true;
        return itIsAlmost;
    }

    if (size % 2 != 0) {
        mid = s[size/2];
        if (count == 1) // a mid b
            if (mid != ch[0] && mid != ch[3])
                return false;
        // if (count == 2) { // a b mid c d
        //     if (ch[0] == ch[1] && ch[2] == ch[3])
        //         return true;
        //     if (ch[0] == ch[1] && ch[2] == ch[3])
        //         return true;
        // }
    } else {
        if (count == 1) // a b
            return false;
        if (count == 2) { // a b c d
            if (ch[0] == ch[1] && ch[2] == ch[3])
                return true;
            if (ch[0] == ch[2] && ch[1] == ch[3])
                return true;
        }
    }

    return true;
}

int main()
{
    string s;

    cin >> s;

    cout << (isAlmostPalindrome(s) ? "YES" : "NO") << endl;

    return 0;
}

// a b mid c d
// a != d
// b != c

// a ?= b
// a ?= c

// // b ?= a
// b ?= d

// d ?= c
// // d ?= b

