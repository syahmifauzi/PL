#include <iostream>
using namespace std;

void time(int& min, int& hour) {
    int sec;
    sec = (hour * 60 + min) * 60;
    cout << "Total number of seconds is: " << sec << endl;
    hour = 5; // change value of hour permanently -> pass by reference
    sec = (hour * 60 + min) * 60;
    cout << "New sec is now: " << sec << endl;
    return;
}

int main()
{
    int min, hour;

    cout << "Enter minutes & hours saperated by a space: "; cin >> min >> hour;
    cout << "Current hour: " << hour << endl;
    time(min, hour);
    cout << "New hour is now: " << hour << endl;

    return 0;
}
