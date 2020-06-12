#include <iostream>
using namespace std;

void someFn(int *a, int size) {
    if (size > 0) {
        someFn(&a[1], size-1);
        cout << *a << ' ';
    }
}

int main()
{
    int a[5] = {32, 27, 64, 18, 95};

    someFn(&a[0], 5);
    cout << endl;

    return 0;
}
