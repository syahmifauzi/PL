#include <stdio.h>

int main()
{
	int no_of_bill, bill, no_of_item, item;
	int item_code, quantity;
	float item_price, total_price, one_bill_price, grand_total;
	
	printf("******** 7Seven Trading ********\n\n");
	printf("How many bills?: ");
	scanf("%d", &no_of_bill);
	
	grand_total = 0;
	for(bill = 1; bill <= no_of_bill; bill++) {
		
		printf("Bill#%d\nNo of item: ", bill);
		scanf("%d", &no_of_item);
		printf("-----------------------------------------\n");
		
		one_bill_price = 0;
		for (item = 1; item <= no_of_item; item++) {
			printf("Item #%d Code: ", item);
			scanf("%d", &item_code);
			printf("Quantity: ");
			scanf("%d", &quantity);
			
			switch (item_code)
			{
				case 330:
					item_price = 20.00;
					total_price = item_price * quantity;
					printf("%d x Slim Green Tea @ RM%.2f each\nPrice (RM): %.2f\n", quantity, item_price, total_price);
					break;
				case 440:
					item_price = 30.00;
					total_price = item_price * quantity;
					printf("%d x Honey Dates Drinks @ RM%.2f each\nPrice (RM): %.2f\n", quantity, item_price, total_price);
					break;
				case 550:
					item_price = 30.00;
					total_price = item_price * quantity;
					printf("%d x Goat Milk Plus @ RM%.2f each\nPrice (RM): %.2f\n", quantity, item_price, total_price);
					break;
				case 660:
					item_price = 25.00;
					total_price = item_price * quantity;
					printf("%d x Coffee Arabica @ RM%.2f each\nPrice (RM): %.2f\n", quantity, item_price, total_price);
					break;
				default:
					printf("Invalid\n");
					// break out the outer loop
			}
			one_bill_price += total_price;
		}
		
		printf("\n**Total for bill#%d: RM%.2f\n", bill, one_bill_price);
		printf("-----------------------------------------\n");
		grand_total += one_bill_price;
	}
	printf("Total amount of %d bills: RM%.2f\n", bill, grand_total);
	
	return 0;
}
