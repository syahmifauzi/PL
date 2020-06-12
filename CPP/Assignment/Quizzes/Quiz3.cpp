/*
 * Group Ibn Bajjah
 */
#include <iostream>
using namespace std;
#define ROW 7

void guess_turns(char a[ROW], char b[ROW]) {
    int correct = 0,
        wrong = 0;
    for (int i = 0; i < ROW; i++) {
        if (a[i] == b[i]) {
            b[i] = '1';
            correct++;
        } else {
            b[i] = '0';
            wrong++;
        }
    }
    cout << correct << " correct,"
         << wrong << " wrong"
         << endl;
    for (int j = 0; j < ROW; j++)
        cout << b[j] << " ";
}

int main()
{
    char corrAns[ROW] = {'L', 'R', 'L', 'R', 'R', 'L', 'L'};
    char userAns[ROW];

    cin >> userAns;

    guess_turns(corrAns, userAns);

    return 0;
}