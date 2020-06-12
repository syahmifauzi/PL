#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265358979

int main()
{
    double diff_area, x;

    cin >> diff_area;

    x = sqrt(diff_area / PI) * 2;

    printf("%.12lf\n", x);
    
    return 0;
}
