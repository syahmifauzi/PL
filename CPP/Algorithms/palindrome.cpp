#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    bool isPalindrome = true;

    cin >> S;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == S[S.length() - i])
            continue;
        else
            isPalindrome = false;
    }

    if (isPalindrome)
        cout << "Yes" << endl;

    return 0;
}
