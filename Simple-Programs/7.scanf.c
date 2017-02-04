#include <stdio.h>

int main()
{
	int num1, num2, sum;                  /* declare multiple variables with same data type in a single declaration */

	printf("ADDING TWO NUMBERS\n");
	printf("==================\n");

	// Get two numbers from user
	printf("Enter the first number: ");
	scanf("%d", &num1);                   /* get the input (integer in this case) from user */
	printf("Enter the second number: ");
	scanf("%d", &num2);

	// Adding the two numbers
	sum = num1 + num2;

	// Display sum
	printf("The sum of %d and %d is %d\n\n", num1, num2, sum);
	printf("End of Program!!\n");

	return 0;
}
