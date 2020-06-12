#include <iostream>
#include <cmath>
using namespace std;

/* Using Function Template */
template <class S>
S subtract(S x, S y) {
    return abs(x - y);
}
// ...with 2 different data types.
template <class M1, class M2>
M1 findMin(M1 x, M2 y) {
    return (x > y ? y : x);
}

/* Using Function Overloading */
int calcAvg(int x, int y) {
    return ((x + y) / 2);
}

double calcAvg(double x, double y) {
    return ((x + y) / 2);
}

int calcVol(int x, int y, int z) {
    return (x * y * z);
}

double calcVol(double x, double y, double z) {
    return (x * y * z);
}

int main()
{
    int i1, i2, isub;
    double d1, d2, dsub;

    // Getting input integer
    cout << "Enter integer 1 (i1): "; cin >> i1;
    cout << "Enter integer 2 (i2): "; cin >> i2;

    // Getting input double
    cout << "Enter double 1 (d1): "; cin >> d1;
    cout << "Enter double 2 (d2): "; cin >> d2;

    // Function call and print results
    isub = subtract(i1, i2);
    dsub = subtract(d1, d2);

    cout << endl;
    cout << "subtract(i1, i2) integers = " << isub << endl;
    cout << "subtract(d1, d2) doubles = " << dsub << endl;

    cout << "findMin(i1, i2) integers = " << findMin(i1, i2) << endl;
    cout << "findMin(d1, d2) doubles = " << findMin(d1, d2) << endl;
    cout << "findMin(d1, i1) both = " << findMin(d1, i1) << endl;

    cout << "calcAvg(i1, i2) integers = " << calcAvg(i1, i2) << endl;
    cout << "calcAvg(d1, d2) doubles = " << calcAvg(d1, d2) << endl;

    cout << "calcVol(i1, i2, i1) integers = " << calcVol(i1, i2, i1) << endl;
    cout << "calcVol(d1, d2, d1) doubles = " << calcVol(d1, d2, d1) << endl;

    return 0;
}
