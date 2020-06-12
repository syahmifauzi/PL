#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name;
    float price;
    int qty;
};

// by default, structure pass by value
double calcTotalPrice(Product p) {
    return (p.price * p.qty);
}

int main()
{
    Product prod1 = {"Milo", 33.99, 50};

    cout << "Total Price: RM" << calcTotalPrice(prod1) << endl;

    return 0;
}
