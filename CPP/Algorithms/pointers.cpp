#include <iostream>
using namespace std;

int main()
{
    int *numAddr; // declaring pointer
    int miles, dist;

    miles = 22;
    dist = 158;
    numAddr = &miles; // store address of miles into *numAddr

    cout << "The address of miles is " << numAddr << endl;
    cout << "The value of miles is " << *numAddr << endl;
    cout << "The address of numAddress " << &numAddr << endl << endl;

    // using pointer in array
    int nums[5] = {50, 10, 20, 30, 40};
    int *ptrNums = &nums[0];
    for (int i = 0; i < 5; i++) {
        cout << "Element subs " << i << " is " << *(ptrNums + i) << endl;
        // by default, array is a pointer, same as nums[i]
        cout << "Element subs " << i << " is " << *(nums + i) << endl;
    }
    // see reference (&)

    return 0;
}