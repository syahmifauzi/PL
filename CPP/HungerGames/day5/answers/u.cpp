#include <iostream>
using namespace std;

struct Dimension {
    int x;
    int y;
};

int main()
{
    int T;

    cin >> T;

    Dimension *rec = new Dimension[T];

    for (int i = 0; i < T; ++i)
        cin >> rec[i].x >> rec[i].y;

    for (int i = 0; i < T; ++i)
        cout << (rec[i].x > rec[i].y ?
                 rec[i].x * rec[i].x :
                 rec[i].y * rec[i].y)
             << endl;
            
    delete[] rec;

    return 0;
}