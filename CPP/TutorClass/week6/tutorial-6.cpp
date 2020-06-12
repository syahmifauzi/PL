#include <iostream>
#include <cctype>
using namespace std;

int vowel(string s);

int main()
{
    string s;
    cout << "Enter string s: ";
    getline(cin, s);

    cout << s << " contains " << vowel(s) << " vowels." << endl;

    return 0;
}

int vowel(string s)
{
    int count = 0;

    for (char c : s) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }

    return count;
}
