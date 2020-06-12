#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    printf("\n### Relation & Diagraph\n");
    int A[] = {1, 2, 3},
        B[] = {5, 6, 7, 8},
        size_A = sizeof(A) / sizeof(A[0]),
        size_B = sizeof(B) / sizeof(B[0]),
        **R = new int*[size_A * size_B],
        index = 0;

    // cartesian product
    for (int i = 0; i < size_A; ++i) {
        for (int j = 0; j < size_B; ++j) {
            R[i] = new int[2];
            R[i][0] = A[i];
            R[i][1] = B[j];
            ++index;
        }
    }

    for (int i = 0; i < size_A * size_B; ++i)
        cout << "(" << R[i][0] << ", " << R[i][1] << "), ";

    return 0;
}