#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string S, S2;

    cin >> S;
    S2 = S;
    
    reverse(S2.begin(), S2.end());

    if (S == S2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
