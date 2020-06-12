#include <iostream>
#include "myslope.h"
using namespace std;

int main()
{
    int i;
    double p1, p2, q1, q2, m;

    cout << "Enter coordinate (p1,q1) separated by space: "; cin >> p1 >> q1;
    cout << "Enter coordinate (p2,q2) separated by space: "; cin >> p2 >> q2;
    cout << "Enter number of loop: "; cin >> i;

    m = findSlope(p1, p2, q1, q2, i);

    cout << "Slope = " << m << endl;

    return 0;
}
