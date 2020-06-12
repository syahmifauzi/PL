#include <iostream>
#include <array>
using namespace std;

#define SIZE 5

// Array does not need to be sorted
// Search every element and compare with key
// -1 means search not found
int sequentialSearch(int a[SIZE], int key) {
    for (int i = 0; i < SIZE; i++)
        if (key == a[i])
            return i;
    return -1;
}

// Array must be sorted
// Compare the key with middle element in an array
// Then divide the array by half and only search in
// half of the array each time until a match is found
// Super fast compared with Sequential Search
int binarySearch(int a[SIZE], int key) {
    int first = 0,
        last = SIZE - 1,
        mid;
    while (first <= last) {
        mid = (first + last) / 2;
        if (key == a[mid]) return mid;
        else if (key > a[mid]) first = mid + 1;
        else last = mid - 1;
    }
    return -1;
}

int main()
{
    int num1[SIZE] = {22, 33, 11, 55, 44};
    int num2[SIZE] = {11, 22, 33, 44, 55};
    int key;

    cout << "Enter an integer to be search: "; cin >> key;

    // SEQUENTIAL/LINEAR SEARCH
    cout << "Sequential Search:" << endl
         << key << " found at index "
         << sequentialSearch(num1, key) << endl << endl;

    // BINARY SEARCH
    cout << "Binary Search:" << endl
         << key << " found at index "
         << binarySearch(num2, key) << endl << endl;

    return 0;
}
