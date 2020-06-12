#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;

    cin >> N;
    double G[N],
           sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> G[i];
        sum += G[i];
    }

    int counter = 0;
    for (int i = 0; i < N; i++) {
        if (G[i] > sum / N)
            counter++;
    }

    cout << fixed << setprecision(3) << counter * 100.0 / N << "%" << endl;

    return 0;
}
