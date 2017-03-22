#include <stdio.h>
#define TAX_RATE 0.06

void GetInput();
void Amount_Due(int, float, float);
void Display_Output(float, float, float, float);

int main()
{
	GetInput();
	
	return 0;
}


void GetInput()
{
	int total_item;
	float item_cost, discount_rate;
	
	printf("Enter number of items purchased: ");
	scanf("%d", &total_item);
	printf("Enter cost per item (RM): ");
	scanf("%f", &item_cost);
	printf("Enter discount rate (0.0 - 1.0): ");
	scanf("%f", &discount_rate);
	
	Amount_Due(total_item, item_cost, discount_rate);
}


void Amount_Due(int total_item, float item_cost, float discount_rate)
{
	float total_cost, total_discounted, tax_due, amount_due;
	
	total_cost = total_item * item_cost;
	total_discounted = total_cost - (discount_rate * total_cost);
	tax_due = total_discounted * TAX_RATE;
	amount_due = total_discounted + tax_due;
	
	Display_Output(total_cost, total_discounted, tax_due, amount_due);
}


void Display_Output(float total_cost, float total_discounted, float tax_due, float amount_due)
{
	printf("\nTotal cost: RM%.2f\n", total_cost);
	printf("Total discounted cost: RM%.2f\n", total_discounted);
	printf("Tax due: RM%.2f\n", tax_due);
	printf("Amount due: RM%.2f\n", amount_due);
}
