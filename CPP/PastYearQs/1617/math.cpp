#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float result, m, t, y;
    m = t = y = 2;

    result = pow(m, 3.0) / (2 * t - sqrt(y));

    cout << result << endl;
    
    return 0;
}