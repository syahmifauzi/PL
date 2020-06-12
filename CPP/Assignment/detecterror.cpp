//#incude <iostream>
#include <iostream>
//using std
using namespace std;

//int main{}
int main()
{
    //double VALUE@ = 5.50;
    double VALUE = 5.50;
    int item, price, qty;
    //double discount 7%;
    double discount = 0.07;
    double totalAmt$;
    double bonus;
    int numHours = 32;

    item = 8;
    //quantity == 5;
    qty = 5;

    //cout << item << " " << proce << endl;"
    cout << item << " " << price << endl;

    //discount = (2 * item * qty) % 5.0;
    discount = (2 * item * qty) * discount;
    VALUE = 29.55;

    //totalAmt = price * (1 - discount) - VAL;
    totalAmt$ = price * (1 - discount) - VALUE;
    VALUE = 7.99;

    //cout << price << space << $totalAmt << \n;
    cout << price << " " << totalAmt$ << "\n";

    float PAY_RATE = 0.05;
    bonus = numHours * PAY_RATE / 25;

    //cout >> "Payrate : " << 'PAY_RATE'<< "Bonus = " >> bons >> endl;
    cout << "Payrate : " << PAY_RATE << "Bonus = " << bonus << endl;

    return 0;
}
