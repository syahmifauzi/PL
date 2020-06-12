#include <iostream>
using namespace std;

int avg( int n[], int num); // function prototype

int main()
{
    int num;
    cout << "Num = ";
    cin >> num;

    int i = 0, x, n[num];
    while (i < num) {
        cout << i << ": ";
        cin >> x;
        if (x < 1 || x > 8) {
            cout << "Invalid entry. Enter again." << endl;
            continue; // reject the value
        }
        n[i] = x; // insert into array
        i++; // increment index
    }

    cout << "avg = " << avg(n, num) << endl; // function call

    return 0;
}

int avg(int n[], int num) {
    int t = 0;

    for (int i = 0; i < num; i++) {
        t += n[i]; // add each value
    }

    return (t/num);
}
