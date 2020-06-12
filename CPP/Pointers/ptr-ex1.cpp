#include <iostream>
#include <cstring>
using namespace std;

void displayChar(char c[]) {
    for (int i = strlen(c); i >= 0; i--)
        if (i % 3 == 0)
            cout << *(c + i) << " ";
}

int main()
{
    char myMsg[] = "Pointers are confusing";

    displayChar(myMsg);

    return 0;
}