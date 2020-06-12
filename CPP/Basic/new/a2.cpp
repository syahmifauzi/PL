#include <iostream>
using namespace std;

int main()
{
    // this statement
    cout << "s\nss\nsss\nssss\nsssss\n";

    // or this statement (using endl)
    cout << "s" << endl
         << "ss" << endl
         << "sss" << endl
         << "ssss" << endl
         << "sssss" << endl;

    // or this statement (using '\n')
    cout << "s" << '\n'
         << "ss" << '\n'
         << "sss" << '\n'
         << "ssss" << '\n'
         << "sssss" << '\n';

    // or this statement (mixed? hmm)
    cout << "s" << '\n'
         << "ss" << endl
         << "sss" << '\n'
         << "ssss" << endl
         << "sssss" << '\n';

    // which one you prefer?? kih3..

    return 0;
}
