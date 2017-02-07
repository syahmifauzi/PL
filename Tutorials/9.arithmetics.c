#include <stdio.h>

int main() {

	int num1, num2;
	int add, sub, mul, div, mod;

	// get input numbers from user
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	add = num1 + num2;                       /* addition */
	printf("\nAddition is %d", add);

	sub = num1 - num2;                       /* subtraction */
	printf("\nSubtraction is %d", sub);

	mul = num1 * num2;                       /* multiplication */
	printf("\nMultiplication is %d", mul);

	div = num1 / num2;                       /* division */
	printf("\nDivision is %d", div);

	mod = num1 % num2;                       /* modulus */
	printf("\nModulus is %d\n\n", mod);

	return 0;
}
