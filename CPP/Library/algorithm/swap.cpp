#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;

    cin >> T;
    int N[T];
    for (int i = 0; i < T; i++) {
        cin >> N[i];
    }

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            if (N[j] > N[j+1]) swap(N[j], N[j+1]);
        }
    }

    for (int i = 0; i < T; i++) {
        cout << N[i] << " ";
    }

    cout << endl;

    return 0;
}
