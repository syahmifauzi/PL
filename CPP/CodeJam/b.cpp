#include <iostream>
using namespace std;

int main()
{
    string S;

    cin >> S;

    for (int i = 0; i < (int)S.size(); i++) {
        if (S[i+1] == '6') {
            if (S[i] == ',' && S[i+2] == ',') S[i] = '\0';
            if (S[i] == ',' && S[i+2] == '}') S[i] = '\0';
            if (S[i] == '{' && S[i+2] == ',') S[i+2] = '\0';
            S[i+1] = '\0';
        }
    }
    cout << S << endl;

    return 0;
}
