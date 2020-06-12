#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int T, N;

    scanf("%d", &T);

    char ch;
    int max;
    int *testCase = new int[T];

    for (int i = 0; i < T; ++i) {
        scanf("%d", &N);
        // initialize to zeros
        int *district = new int[N]();
        // get the inputs char by char
        for (int j = 0; j < 3; ++j) {
            for (int i = 0; i < N * 3; ++i) {
                scanf(" %c", &ch);
                if (ch == '*') district[i/3] += 4;
            }
        }
        // get the highest no of students
        max = district[0];
        for (int i = 1; i < N; ++i)
            if (max < district[i])
                max = district[i];
        testCase[i] = max;
        // unallocate the memory
        delete[] district;
    }

    for (int i = 0; i < T; ++i)
        cout << testCase[i] << endl;

    delete[] testCase;
            
    return 0;
}