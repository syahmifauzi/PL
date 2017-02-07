#include <stdio.h>

int main()
{
	// vars declaration
	int quantity;
	float unit_price, sell_price, profit;
	
	// get input from user
	printf("Enter item quantity: ");
	scanf("%d", &quantity);
	
	printf("Enter unit price (RM): ");
	scanf("%f", &unit_price);
	
	printf("Enter selling price (RM): ");
	scanf("%f", &sell_price);
	
	// calculation for profit
	profit = quantity * (sell_price - unit_price);
	
	// display profit
	printf("The profit is: RM%.2f\n", profit);
	
	return 0;
}
