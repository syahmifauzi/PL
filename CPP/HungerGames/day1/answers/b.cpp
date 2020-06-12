#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;

    cin >> S;

    int start = S.find("game");

    if (start >= 0 && start <= 100)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}