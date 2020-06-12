#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    string S;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> S;
        for (int j = 0; j < S.length(); j++) {
            switch (S[j]) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    cout << "*";
                    break;
                default:
                    cout << "#";
            }
        }
        cout << endl;
    }


    return 0;
}
