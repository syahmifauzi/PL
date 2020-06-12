#include <iostream>
#include <iomanip>
using namespace std;

void convertTime(int T) {
    bool isTime = false,
         isAM = true;
    int h = T / 100,       // to get the right part
        m = T - (h * 100); // or T % 100 to get the left part

    // 123 % 9 = 6 (sum)
    if (h >= 0 && h < 24) {
        if (h >= 12) isAM = false;
        if (h == 0) h = 12;
        if (h > 12) h %= 12;
        if (m >= 0 && m < 60)
            isTime = true;
    } else {
        isTime = false;
    }

    if (isTime) {
        cout << (h < 10 ? "0" : "") << h
             << (m < 10 ? ":0" : ":") << m
             << (isAM ? " AM" : " PM") << endl;
        // or (include iomanip)
        cout << setfill('0') << setw(2) << h;
        cout << ":";
        cout << setfill('0') << setw(2) << m;
        cout << (isAM ? " AM" : " PM") << endl;
    } else {
        cout << "No such time" << endl;
    }

    return;
}

int main()
{
    int T;

    cout << "Enter time in 24 hours format (eg. 0000): "; cin >> T;

    convertTime(T);

    return 0;
}
