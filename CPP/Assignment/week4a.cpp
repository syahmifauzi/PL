#include <iostream>
#include <string>
using namespace std;

int main()
{
    float price;
    string level;

    cout << "Enter the price: ";
    cin >> price;

    if (price >= 10 && price <= 20)
        level = "$";
    else if (price >= 21 && price <= 50)
        level = "$$";
    else if (price >= 51 && price <= 100)
        level = "$$$";
    else if (price >= 101 && price <= 500)
        level = "$$$$";
    else
        level = "Price not in range";

    cout << level << endl;

    return 0;
}

