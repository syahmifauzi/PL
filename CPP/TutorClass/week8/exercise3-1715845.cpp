#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string S;

    cin >> S;
    for (int i = 0; i < S.size(); i++) {
        switch (S[i]) {
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                cout << "";
                continue;
        }
        cout << ".";
        if (isupper(S[i]))
            cout << (char)tolower(S[i]);
        else
            cout << S[i];
    }
    cout << endl;

    return 0;
}
