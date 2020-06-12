#include <iostream>
using namespace std;

int calc(string s)
{
    int count = 0; // count variable
    // string is an array of characters
    // for each character c in string s, do statement to c
    for (char c : s) {
        if (c == 'a')
            count++;
    }

    return count;
}

int main()
{
    string s;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Total 'a' : " << calc(s) << endl;

    return 0;
}
