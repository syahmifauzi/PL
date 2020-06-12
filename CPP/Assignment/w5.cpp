/*
 * Muhammad Syahmi Fathimi bin Ahmad Fauzi 1715845
 * Muhammad Farhan bin Azhar 1718485
 */
#include <iostream>
using namespace std;

int main()
{
    const int MAXNUMS = 4;
    int count;
    double num, total;

    cout << "This program will ask you to enter "
         << MAXNUMS << " numbers." << endl;

    count = 1;
    total = 0;

    while (count <= MAXNUMS) {
        cout << "Enter a number: ";
        cin >> num;
        total += num;
        cout << "The total is now " << total << endl;
        count++;
    }

    cout << "The final total is " << total << endl;

    return 0;
}
