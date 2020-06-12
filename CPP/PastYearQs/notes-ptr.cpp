#include <iostream>
using namespace std;

// Using reference &
void swap2(int &x, int &y) {
    int temp = x;
    x = y;
   y = temp;
}

// Using pointer *
void swap(int *x, int *y) {
    int temp = *x;
   *x = *y;
   *y = temp;
}

int main()
{
    // Reference &
    char c = 'g'; 
    char &cRef = c;


    // Pointer *
    int a = 5;
    int *aPtr = &a;

    cout << "Accessing value/address using a" << endl;
    cout << "value of a = " << a << endl;
    cout << "address of a = " << &a << endl << endl;

    cout << "Accessing value/address using aPtr pointer" << endl;
    cout << "value of a = " << *aPtr << endl;
    cout << "address of a = " << aPtr << endl;
    cout << "address of aPtr = " << &aPtr << endl;

    int b = 10;

    *aPtr = 20;
    cout << "value of a = " << a << endl;
    cout << "value of a = " << *aPtr << endl;
    
    aPtr = &b;
    cout << "value of b = " << b << endl;
    cout << "value of b = " << *aPtr << endl;

    // Pointer array
    int nums[] = {1, 2, 3};
    int *numsPtr = &nums[2]; // same as num only

    cout << "*(numsPtr + 1): " << *(numsPtr - 1) << endl;
    cout << "numPtr[1]: " << numsPtr[-1] << endl;
    cout << "*(nums + 1): " << *(nums + 1) << endl;
    cout << "nums[1]: " << nums[1] << endl << endl;


    // Pointer in function
    int numA = 30;
    int numB = 50;
    cout << "numA = " << numA << endl;
    cout << "numB = " << numB << endl;
    swap(&numA, &numB);
    cout << "numA = " << numA << endl;
    cout << "numB = " << numB << endl;


    return 0;
}