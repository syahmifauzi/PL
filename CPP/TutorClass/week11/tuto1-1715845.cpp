#include <iostream>
using namespace std;

int main()
{
    char s[] = "Pointers are confusing";
    int size = sizeof(s) / sizeof(s[0]);

    // count start with 0 plus with \0 (null character)
    cout << "Size of string: " << size - 1 << endl;

    char *c = &s[size-2];
    size -= 2;

    while (size > 0) {
        cout << *c;
        c -= 3;
        size -= 3;
    }
    cout << endl;

    // cout << endl << "*c = " << *c << endl;

    return 0;
}