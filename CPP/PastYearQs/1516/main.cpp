#include <iostream>
#include <string>
using namespace std;

struct Property {
    string name;
    string type;
    double price;
    string location;
    int quantity;
    int buildUp;
    int room;
};

void insert_prop(Property *p);
void display_prop(Property *p);
double book_prop(Property *p);

int main()
{
    int opt;
    double totalPrice;
    Property properties;

    do {
        cout << "MENU\n"
            << "1. Insert Properties\n"
            << "2. Display Properties\n"
            << "3. Book Properties\n"
            << "Your option: ";
        cin >> opt;

        switch(opt) {
            case 1: insert_prop(&properties); break;
            case 2: display_prop(&properties); break;
            case 3: totalPrice += book_prop(&properties); break;
            default: cout << "Invalid option" << endl;
        }

        if (opt == 3) {
            cout << "Total price for your properties are RM "
                 << totalPrice << endl;
        }            

    } while (true);

    return 0;
}


void insert_prop(Property *p) {
    cout << "Enter property name: "; cin >> p->name; cin.ignore();
    cout << "Enter property type: "; cin >> p->type; cin.ignore();
    cout << "Enter property price: "; cin >> p->price; cin.ignore();
    cout << "Enter property location: "; getline(cin, p->location);
    cout << "Enter property quantity: "; cin >> p->quantity; cin.ignore();
    cout << "Enter property buildUp: "; cin >> p->buildUp; cin.ignore();
    cout << "Enter no. of rooms: "; cin >> p->room; cin.ignore();
}


void display_prop(Property *p) {
    cout << "List of DreamHouse Properties" << endl;
    cout << "Name\tType\tPrice\tLocation\tQty\tBuild-up\tRoom" << endl;
    cout << p->name << '\t'
         << p->type << '\t'
         << p->price << '\t'
         << p->location << "\t\t"
         << p->quantity << '\t'
         << p->buildUp << "\t\t"
         << p->room << endl;
}

double book_prop(Property *p) {
    int book;
    string prop;
    cout << "Enter the name of property: "; cin >> prop;
    cout << "Enter the no. of unit/s to book: "; cin >> book;
    if (prop.compare(p->name) == 0) {
        p->quantity -= book;
        return (book * p->price);
    }
}
