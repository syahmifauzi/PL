#include <iostream>
using namespace std;

int main()
{
    int size;
    
    cout << "Enter initial size of array: ";
    cin >> size;

    int index = 0, value;
    int *array = new int;

    while (cin >> value) {
        if (value == -1) break;
        if (index == size) {
            cout << "Array is full. Increase the size of array by "
                 << size << endl;
            size += size;
        }
        cout << "Insert value " << value << endl;
        array[index++] = value;
    }

    for (int i = 0; i < index; i++)
        cout << array[i] << " ";
    cout << endl;

    return 0;
}