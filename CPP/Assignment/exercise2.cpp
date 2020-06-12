/*
 * Muhammad Farhan bin Azhar
 * 1718485
 * Muhammad Syahmi Fathimi bin Ahmad Fauzi
 * 1715845
 */
#include <iostream>

int main()
{
    // Variable Declaration
    float price_bcake, price_wcake, price_ccake, total_price;
    float weight_bcake1, weight_bcake2, weight_bcake3;
    float weight_wcake1, weight_wcake2;
    int total_ccake;

    // Variable Initialization
    price_bcake = 35.0;
    price_wcake = 55.0;
    price_ccake = 4.5;

    weight_bcake1 = 2.0;
    weight_bcake2 = 4.5;
    weight_bcake3 = 3.0;

    weight_wcake1 = 5.0;
    weight_wcake2 = 3.5;

    total_ccake = 250;

    // Calculate & Print Total Price
    total_price = (price_bcake * (weight_bcake1 + weight_bcake2 + weight_bcake3)) + (price_wcake * (weight_wcake1 + weight_wcake2)) + (price_ccake * total_ccake);

    std::cout << "Total price is RM" << total_price << std::endl;

    return 0;
}
