/*
 * relational operators are used to
 * compare the value of two or more variables
 */
#include <stdio.h>

int main()
{
	int num1 = 6, num2 = 9;

	// 0 for false and
	// 1 for true
	printf("%d\n", num1 == num2);
	printf("%d\n", num1 != num2);
	printf("%d\n", num1 < num2);
	printf("%d\n", num1 <= num2);
	printf("%d\n", num1 > num2);
	printf("%d\n", num1 >= num2);

	return 0;
}
