#include <stdio.h>

int main() {
	
	int num1, num2;
	int add, sub, mul, div, mod;

	printf("Enter first number: ");
	scanf("%d", &num1);

	printf("Enter second number: ");
	scanf("%d", &num2);

	add = num1 + num2;
	printf("\nAddition is %d", add);

	sub = num1 - num2;
        printf("\nSubtraction is %d", sub);

	mul = num1 * num2;
        printf("\nMultiplication is %d", mul);

	div = num1 / num2;
        printf("\nDivision is %d", div);

	mod = num1 % num2;
        printf("\nModulus is %d\n\n", mod);

	return 0;	
}
