#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    int randNo, min = 25, max = 30;

    for (int i = 0; i < 10; ++i) {
        randNo = min + rand() % (max - min + 1);
        cout << randNo << endl;
    }

    return 0;
}