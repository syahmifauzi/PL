#include <iostream>
#include <string>
using namespace std;
#define SIZE 5

struct Product {
    string name;
    float price;
    int qty;
};

double calcTotalPrice(Product p[], int i) {
    return (p[i].price * p[i].qty);
}

void displayProducts(Product p[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << "Product: " << p[i].name << endl
             << "Price: RM" << p[i].price << endl
             << "Quantity: " << p[i].qty << endl
             << "Total Price: RM" << calcTotalPrice(p, i)
             << endl << endl;
    }
}

int main()
{
    // array of structure
    Product prod[SIZE] = {{"Milo", 33.99, 50},
                          {"Horlick", 25.99, 30},
                          {"Ovaltine", 22.99, 40},
                          {"Chocolate", 35.99, 20},
                          {"Nescafe", 16.99, 10}};

    displayProducts(prod);

    return 0;
}
