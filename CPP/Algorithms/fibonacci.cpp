#include <iostream>
using namespace std;

inline void fibonacciM1(int ppNum, int pNum, int limit) {
    if (ppNum + pNum > limit) return;
    cout << ppNum + pNum << " ";
    fibonacciM1(pNum, ppNum + pNum, limit);
}

void fibonacciM2(int ppNum, int pNum, int limit) {
    int fibNum = ppNum + pNum;
    while (fibNum < limit) {
        cout << fibNum << " ";
        ppNum = pNum;
        pNum = fibNum;
        fibNum = pNum + ppNum;
    }
}

int main()
{
    int N;

    cout << "Fibonacci Number up to: "; cin >> N;
    cout << "0 1 ";
    fibonacciM1(0, 1, N);

    cout << "\n\nFibonacci Number up to " << N << endl;
    cout << "0 1 ";
    fibonacciM2(0, 1, N);

    return 0;
}