#include <iostream>
using namespace std;

int main()
{
    int N, Ndays[100000], M, Mids[100000];

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> Ndays[i];
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> Mids[i];
    }

    for (int i = 0; i < M; i++) {
        int counter = 0;
        for (int j = 0; j < N; j++) {
            if (Ndays[j] == Mids[i]) counter++;
        }
        if (counter == 0)
            cout << "Never Attended" << endl;
        else
            cout << counter << endl;
    }

    return 0;
}
