/*
 * Problem 2 (Pg. 54)
 * A program that use one scanf to real 2 inputs
 */
 #include <stdio.h>

int main()
{
	// variables declaration
	int quantity;
	float price, total_price;

	// get data from user
	printf("Enter quantity and price: ");
	scanf("%d%f", &quantity, &price);        /* get 2 inputs in one statement */

	// calculate total_price
	total_price = quantity * price;          /* the result will assigned to total_price */

	// display data and total
	printf("The total price is:\n");
	printf("%d x RM%.2f = RM%.2f\n", quantity, price, total_price);

	return 0;
}
