#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *S = new char;

    cin >> S;

    int size = strlen(S);

    for (int i = 0; i < size; i++)
        S[i] -= 7;

    cout << S;

    return 0;
}