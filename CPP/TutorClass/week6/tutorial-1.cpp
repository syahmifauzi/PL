#include <iostream>
using namespace std;

void reverse(string s); // function prototype

int main()
{
    string s; // int string s

    while (cin >> s) {
        if (s == "$") break; // sentinal

        reverse(s); // function call
    }

    return 0;
}

// reverse means read string backwards
// so, we just need to read each character
// start from end to begin
void reverse(string s) // function declaration
{
    int l = s.size();

    for (int i = l-1; i >= 0; i--)
        cout << s[i];

    cout << endl;
}
