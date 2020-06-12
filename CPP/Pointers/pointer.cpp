#include <iostream>
#include <cstring>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    // basic pointer
    int num = 5;
    int *ptrNum;

    ptrNum = &num;

    cout << "Value of num: " << *ptrNum << endl;
    cout << "Address of num: " << ptrNum << endl;
    cout << "Address of ptrNum: " << &ptrNum << endl << endl;

    int num2 = 10;

    ptrNum = &num2;

    cout << "Value of num2: " << *ptrNum << endl;
    cout << "Address of num2: " << ptrNum << endl;
    cout << "Address of ptrNum: " << &ptrNum << endl << endl;

    // 1d - pointer array
    float mark[] = {99.3, 50.2, 79.8, 54.7, 88.9};
    // float *ptrMark = &mark[0]; // or
    float *ptrMark = mark;

    cout << "Value of mark" << endl;
    for (int i = 0; i < 5; i++) {
        // cout << mark[i] << " "; // or
        // cout << *(ptrMark + i) << " "; // or
        cout << *(mark + i) << " ";
    }
    cout << endl << endl;

    // 2d - pointer array
    int matrix[2][3] = {{1, 2, 3},
                        {4, 5, 6}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            // cout << matrix[i][j] << " "; // or
            cout << *(*(matrix + i) + j) << " ";
        }
        cout << endl;
    }

    // new operator - to allocate memory
    char *S = new char;

    cout << endl << "Enter a string: ";
    cin >> S;

    int size = strlen(S);

    for (int i = 0; i < size; i++)
        cout << S[i] << " ";
    cout << endl << endl;

    delete S;

    // dynamic array allocation
    int totalnums;
    cout << "Enter total numbers: ";
    cin >> totalnums;
    
    int *ptrTotal = new int[totalnums];
    for (int i = 0; i < totalnums; i++)
        cin >> *(ptrTotal + i);
    for (int i = totalnums - 1; i >= 0; i--)
        cout << *(ptrTotal + i) << " ";
    cout << endl << endl;

    delete ptrTotal;

    // pointer in function
    int noA = 3;
    int noB = 5;
    cout << "noA = " << noA << endl
         << "noB = " << noB << endl;
    swap(&noA, &noB);
    cout << "noA = " << noA << endl
         << "noB = " << noB << endl;

    return 0;
}