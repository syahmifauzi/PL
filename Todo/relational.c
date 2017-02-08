/*
 * relational operators are used to
 * compare the value of two or more variables
 */
#include <stdio.h>

int main()
{
	int num1, num2;

	printf("Enter first number: ");
	scanf("%d", &num1);

	printf("Enter second number: ");
	scanf("%d", &num2);

	// == operator (!= for not equal)
	if (num1 == num2) {
		printf("num1 is equal to num2\n");
		printf("both num1 and num2 is equal to %d\n", num1);
	} else {
		printf("num1 is NOT equal to num2\n");
		printf("num1 is %d and num2 is %d\n", num1, num2);
	}

	/*
	 * you should not use open and close curly braces
	 * if there is only one statement inside your if else block
	 */
	// > operator
	if (num1 > num2)
		printf("num1 is more than num2\n");
	else
		printf("num1 is NOT more than num2\n");

	// < operator
	if (num1 < num2)
		printf("num1 is less than num2\n");
	else
		printf("num1 is NOT less than num2\n");

	// >= operator
	if (num1 >= num2)
		printf("num1 is more than or equal to num2\n");
	else
		printf("num1 is NOT more than or equal to num2\n");

	// <= operator
	if (num1 <= num2)
		printf("num1 is less than or equal to num2\n");
	else
		printf("num1 is NOT less than or equal to num2\n");

	return 0;
}
