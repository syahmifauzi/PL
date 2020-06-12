#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    
    cin >> s;

    // Count As without using library
    int aCnt = 0;
    for (int i = 0; i < s.length(); ++i)
        if (s[i] == 'A')
            ++aCnt;
    cout << aCnt << endl;

    // Count As using library
    aCnt = count(s.begin(), s.end(), 'A');
    cout << aCnt << endl;

    return 0;
}