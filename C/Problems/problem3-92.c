/*
 * Problem 3 (pg. 92)
 * 
 * 
 */
#include <stdio.h>

int main()
{
	int num1, num2, result;
	char opr;
	
	printf("Enter two integers: ");
	scanf("%d%d", &num1, &num2);
	
	printf("Enter an operator (+, -, *, /): ");
	scanf(" %c", &opr);
	
	if (opr == '+')
		result = num1 + num2;
	else if (opr == '-')
		result = num1 - num2;
	else if (opr == '*')
		result = num1 * num2;
	else if (opr == '/')
		if (num2 != 0)
			result = num1 / num2;    // TODO: convert to float
		else
			printf("Cannot devide by 0\n");
	else 
		printf("invalid operator\n");
	
	if (opr == '+' || opr == '-' || opr == '*' || opr == '/')
		printf("%d %c %d = %d\n", num1, opr, num2, result);
	
	return 0;
}
