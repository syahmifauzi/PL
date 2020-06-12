#include <iostream>
using namespace std;

inline void teststatic() {
    static int num = 0;
    cout << "Value of static variable num is: "
         << num << endl;
    num++;
    return;
}

int main()
{
    for (int i = 0; i <= 3; i++)
        teststatic();

    return 0;
}
