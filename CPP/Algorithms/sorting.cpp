#include <iostream>
using namespace std;

#define SIZE 5

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int bubbleSort(int a[SIZE]) {
    int totalMoves = 0;
    for (int i = 0; i < SIZE - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (a[j] > a[j+1]) {
                swap(&a[j], &a[j+1]);
                totalMoves++;
            }
        }
    }
    return totalMoves;
}

int selectionSort(int a[SIZE]) {
    int min_idx, totalMoves = 0;
    for (int i = 0; i < SIZE - 1; i++) {
        min_idx = i;
        for (int j = i + 1; j < SIZE; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
                totalMoves++;
            }
        }
        swap(&a[min_idx], &a[i]);
    }
    return totalMoves;
}

int insertionSort(int a[SIZE]) {
    int j, totalMoves = 0;
    for (int i = 0; i < SIZE; i++) {
        j = i;
        while (a[j-1] > a[j]) {
            swap(&a[j-1], &a[j]);
            totalMoves++;
            j--;
        }
    }
    return totalMoves;
}

int main()
{
    int num1[SIZE] = {50, 30, 40, 10, 20};
    int num2[SIZE] = {5, 3, 4, 1, 2};
    int num3[SIZE] = {9, 7, 8, 5, 6};
    int i, totalMoves;

    // BUBBLE SORT
    totalMoves = bubbleSort(num1);
    cout << "Bubble Sort: ";
    for (i = 0; i < SIZE; i++)
        cout << num1[i] << " ";
    cout << endl << "Total Moves: " << totalMoves << endl;

    // SELECTION SORT
    totalMoves = selectionSort(num2);
    cout << "Selection Sort: ";
    for (i = 0; i < SIZE; i++)
        cout << num2[i] << " ";
    cout << endl << "Total Moves: " << totalMoves << endl;

    // INSERTION SORT
    totalMoves = insertionSort(num3);
    cout << "Insertion Sort: ";
    for (i = 0; i < SIZE; i++)
        cout << num3[i] << " ";
    cout << endl << "Total Moves: " << totalMoves << endl;

    return 0;
}