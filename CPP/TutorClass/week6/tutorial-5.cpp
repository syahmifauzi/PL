#include <iostream>
#include <cctype> // same as #include "ctype.h"
#include "math.h"
using namespace std;

void check(string s);

int main()
{
    string s;

    cout << "Enter string s: ";
    cin >> s;

    cout << s << endl;
    check(s);

    return 0;
}

void check(string s)
{
    for (int i = 0; i < (int)s.size(); i++) {
        if (islower(s[i]))
            cout << (char)toupper(s[i]);
        else
            cout << (char)tolower(s[i]);
    }
    cout << endl;
}
