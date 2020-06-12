// g++ main.cpp volume.cpp && ./a.out
#include <iostream>
#include "volume.h"
using namespace std;

int main()
{
    // Volume v1(99.82);
    Volume v1;
    v1.setVolume(1221.21);
    cout << v1.getVolume() << endl;

    return 0;
}
