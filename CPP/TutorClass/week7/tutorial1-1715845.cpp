#include <iostream>
using namespace std;

int vowel(string s) {
    int count = 0;

    for (int i = 0; i < (int)s.size(); i++) {
        switch (s[i]) {
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                count++;
        }
    }

    return count;
}

int main()
{
    string s;

    cout << "Enter the full name: ";
    getline(cin, s); // by default, 3rd parameter is '\n'

    cout << "The entered name " << s << " contains "
         << vowel(s) << " vowels." << endl;

    return 0;
}
