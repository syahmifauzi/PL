/*
 * Muhammad Syahmi Fathimi bin Ahmad Fauzi 1715845
 * Muhammad Farhan bin Azhar 1718485
 */
#include <iostream>
#include <iomanip>
using namespace std;

#define ROWS 3
#define COLS 3

int X[ROWS][COLS];
int XT[ROWS][COLS];
int DX[ROWS];

int findDeterm(int X[][COLS]);
void transposeMat(int X[][COLS]);
void xtractDiag(int XT[][COLS]);

int main()
{
    int i, j;

    cout << "Enter values for array X:" << endl;
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            cin >> *(*(X + i) + j);

    int determinant = findDeterm(X);
    cout << endl << "|X| or the determinant of X is: "
         << determinant << endl << endl;

    transposeMat(X);
    xtractDiag(XT);

    return 0;
}

int findDeterm(int X[][COLS]) {
    int determinant, a, b, c;

    a = *(*(X+1)+1) * *(*(X+2)+2) - *(*(X+1)+2) * *(*(X+2)+1);
    b = *(*(X+1)) * *(*(X+2)+2) - *(*(X+2)) * *(*(X+1)+2);
    c = *(*(X+1)) * *(*(X+2)+1) - *(*(X+1)+1) * *(*(X+2)+0);

    determinant = (*(*X) * a) - (*(*X+1) * b) + (*(*X+2) * c);

    return determinant;
}

void transposeMat(int X[][COLS]) {
    int i, j;

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            *(*(XT + j) + i) = *(*(X + i) + j); // XT[j][i] = X[i][j];
    
    cout << "XT or the transposed value of matrix X is:" << endl;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++)
            cout << setw(3) << *(*(XT + i) + j);
        cout << endl;
    }
    cout << endl;
}

void xtractDiag(int XT[][COLS]) {
    int i, j;

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            if (i == j)
                *(DX + i) = *(*(XT + i) + j); // DX[i] = XT[i][j];

    cout << "The value of matrix DT (diagonal values) is:" << endl << "|";
    for (i = 0; i < ROWS; i++)
        cout << setw(3) << *(DX + i);
    cout << "  |" << endl;
}