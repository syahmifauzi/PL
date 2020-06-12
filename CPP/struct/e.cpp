#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name;
    float price;
    int qty;
};

// using function & struct with pointer
double calcTotalPrice(Product *p) {
    return (p->price * p->qty);
}

// returning the whole structure
Product getNewProduct() {
    Product newVal = {"Horlick", 33.21, 21};
    return newVal;
}

void displayProducts(Product *p) {
    cout << "Product: " << p->name << endl
         << "Price: RM" << p->price << endl
         << "Quantity: " << p->qty << endl
         << "Total Price: RM" << calcTotalPrice(p)
         << endl << endl;
}

int main()
{
    Product prod = {"Milo", 33.99, 50};

    // the returned struct must be stored in struct data type
    prod = getNewProduct();

    displayProducts(&prod);

    return 0;
}
