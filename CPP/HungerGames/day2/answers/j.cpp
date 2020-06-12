#include <iostream>
#include <cstdio>
#include <algorithm>
#include <bitset>
using namespace std;

void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void getHammingDistance(int *total_test, int *Ai, int curr_test, int ai_size) {
    // sort the Ai first
    bubbleSort(Ai, ai_size);

    bitset<16> myBit;
    int maxHD = 0;

    // generate all possible combination without repetition
    for (int i = 0; Ai[i] != Ai[ai_size-1]; ++i) {
        for (int j = 0; j < ai_size; ++j) {
            if (Ai[i] != Ai[j] && Ai[j] > Ai[i]) {
                // for testing
                    // cout << Ai[i] << ' ' << Ai[j] << endl;
                    // cout << bitset<16>(Ai[i]) << '\n' << bitset<16>(Ai[j]) << endl;
                // get the different bits using xor operator
                myBit = Ai[i] ^ Ai[j];
                // get the maximum HD
                if (myBit.count() > maxHD)
                    maxHD = myBit.count();
            }
        }
    }
    
    // the purpose of this problem lol..
    total_test[curr_test] = maxHD;
}

int main()
{
    int T, N;

    scanf("%d", &T);

    int *total_test = new int[T];

    // Note: scanf is faster than cin
    for (int i = 0; i < T; ++i) {
        scanf("%d", &N);
        int *Ai = new int[N];
        for (int j = 0; j < N; ++j)
            scanf("%d", &Ai[j]);
        getHammingDistance(total_test, Ai, i, N);
        delete[] Ai;
    }

    for (int i = 0; i < T; ++i)
        cout << total_test[i] << endl;

    delete[] total_test;

    return 0;
}
