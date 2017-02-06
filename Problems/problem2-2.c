#include <stdio.h>

int main()
{
	// variables declaration
	int quantity;
	float price, total_price;

	// get data from user
	printf("Enter quantity and price: ");
	scanf("%d%f", &quantity, &price);

	// calculate total_price
	total_price = quantity * price;          /* the result will assigned to total_price */

	// display data and total
	printf("The total price is:\n");
	printf("%d x RM%.2f = RM%.2f\n", quantity, price, total_price);

	return 0;
}
