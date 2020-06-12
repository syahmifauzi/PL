#include <iostream>
#include <string>
using namespace std;

bool findIt(string s, char c) {
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == c)
            return true;
    }

    return false;
}

int main()
{
    string s;
    char c;

    cout << "Enter a string: "; cin >> s;
    cout << "Enter a character: "; cin >> c;

    cout << "The string " << s << " "
         << (findIt(s, c)? "contains" : "not contains") // ternary operator
         << " the character " << c << endl;

    return 0;
}
