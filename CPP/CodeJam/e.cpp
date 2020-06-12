#include <iostream>
using namespace std;
#define SIZE 1000

bool isFantastic(int N[][SIZE], int M) {
    if (M == 1) return 0;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cout << N[i][j];
        }
    }

    return 0;
}

int main()
{
    int M, N[SIZE][SIZE];

    for (int test = 0; test < 5; test++) {
        cin >> M;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < M; j++) {
                cin >> N[i][j];
            }
        }
        cout << "Fantastic" << endl;
        isFantastic(N, M);
    }

    return 0;
}
