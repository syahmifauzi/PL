#include <iostream>
#include <string>
using namespace std;

// global structure
struct Product {
    string name;
    float price;
    int qty;
};

int main()
{
    Product prod1;

    prod1.name = "Horlic";
    prod1.price = 23.99;
    prod1.qty = 25;

    cout << prod1.name << endl
         << prod1.price << endl
         << prod1.qty << endl;

    // or

    Product prod2 = {"Milo", 32.99, 50};

    cout << prod2.name << endl
         << prod2.price << endl
         << prod2.qty << endl;

    return 0;
}