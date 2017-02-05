#include <stdio.h>

int main()
{
	// variables declaration
	int quantity;
	float price, totalPrice;
	
	// get data from user
	printf("Enter quantity and price: ");
	scanf("%d%f", &quantity, &price);
	
	// calculate totalPrice
	totalPrice = quantity * price; // the result will assigned to totalPrice
	
	// display data and total
	printf("The total price is:\n");
	printf("%d x RM%.2f = RM%.2f", quantity, price, totalPrice);
	
	return 0;
}
