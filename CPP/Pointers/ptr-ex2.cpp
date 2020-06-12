#include <iostream>
using namespace std;

void swap(double *x, double *y) {
    double temp = *x;
    *x = *y;
    *y = temp;
    // display address of num1 & num2
    cout << "x = " << x << ", y = " << y << endl;
    // display address of pointers x & y
    cout << "x = " << &x << ", y = " << &y << endl;
}

int main()
{
    double num1 = 2.123, num2 = 5.001;

    cout << "x = " << num1 << ", y = " << num2 << endl;
    swap(&num1, &num2);

    return 0;
}