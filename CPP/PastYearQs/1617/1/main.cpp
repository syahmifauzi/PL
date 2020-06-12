#include <iostream>
using namespace std;

void stat_arr(float arr[], float *min, float *max, float *avg) {
    int x = 0;
    *min = arr[0];
    *max = arr[0];
    for (int i = 0; i < 10 && arr[i] != -1; ++i) {
        // Find the min prices
        if (*min > arr[i]) *min = arr[i];
        // Find the max prices
        if (*max < arr[i]) *max = arr[i];
        // Find the avg prices
        *avg += arr[i];
        ++x;
    }
    *avg /= x;
}

int main()
{
    float min, max, avg;
    min = max = avg = 0.0;
    float prices[10] = {0};

    for (int i = 0; i < 10; ++i) {
        cin >> prices[i];
        if (prices[i] == -1) break;
    }

    stat_arr(prices, &min, &max, &avg);

    cout << "Min: " << min << endl
         << "Max: " << max << endl
         << "Avg: " << avg << endl;

    return 0;
}