/*
 * A program that will get weight of a product in kg,
 * and the price per 100g and print the amount before and
 * after discounts
 */
#include <stdio.h>
#define RATE 0.15

int main()
{
	float weight, price_g, price_kg, nodis_price, dis_price;
	
	printf("Enter weight of a product (kg): ");
	scanf("%f", &weight);

	printf("Enter price per 100g (RM): ");
	scanf("%f", &price_g);
	
	price_kg = price_g * 10;                /* convert price from g to price for kg */
	nodis_price = price_kg * weight;
	dis_price = (price_kg - (price_kg * RATE)) * weight;
//	discount = nodis_price * RATE;
	
	printf("Amount before discount: %.2f\n", nodis_price);
	printf("Amount after discount: %.2f\n", dis_price);
		
	return 0;
}
