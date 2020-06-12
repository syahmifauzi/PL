#include <iostream>
using namespace std;

struct Coordinate {
    int x;
    int y;
};

int main()
{
    int T, N;

    cin >> T;

    // temp holds all coordinates of curr rectangle
    Coordinate tempRec[4];
    Coordinate max;
    Coordinate min;

    int *area = new int[T];

    for (int i = 0; i < T; ++i) {
        cin >> N;
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < 4; ++k)
                cin >> tempRec[k].x >> tempRec[k].y;
            if (j == 0) {
                max.x = tempRec[0].x;
                max.y = tempRec[0].y;
                min.x = tempRec[0].x;
                min.y = tempRec[0].y;
            }
            for (int k = 0; k < 4; ++k) {
                if (max.x < tempRec[k].x) max.x = tempRec[k].x;
                if (max.y < tempRec[k].y) max.y = tempRec[k].y;
                if (min.x > tempRec[k].x) min.x = tempRec[k].x;
                if (min.y > tempRec[k].y) min.y = tempRec[k].y;
            }
        }
        area[i] = (max.x - min.x) * (max.y - min.y);
    }

    for (int i = 0; i < T; ++i)
        cout << area[i] << endl;

    delete[] area;

    return 0;
}