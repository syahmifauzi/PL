#include <iostream>
using namespace std;

int main()
{
    int p, q, r,
        days_left, total_design, add_days;

    cout << "Please enter the value of p : ";
    cin >> p;
    cout << "Please enter the value of q : ";
    cin >> q;
    cout << "Please enter the value of r : ";
    cin >> r;

    add_days = p * q; // 6
    total_design = 1;
    days_left = r;

    cout << "No of designs\tDays left to prepare design(days)" << endl;
    for (int i = 1; i <= r; i++) {
        if (i == p || i == add_days) {
            if (i != p)
                days_left -= add_days;
            else
                days_left = r - p;
            cout << "\t" << total_design << "\t\t\t" << days_left << endl;
            if (add_days <= days_left)
                total_design++;
            if (i != p) {
                add_days *= 2; // ok
            }
        }
    }

    cout << "Total days left = " << days_left << " days" << endl;
    cout << "No of designs created = " << total_design << endl;

    return 0;
}
