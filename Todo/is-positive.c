/*
 * Pass a value of an array to function isPositive,
 * to check whether the number is positive or negative
 */
#include <stdio.h>

void isPositive(int);

int main()
{
	int i, numbers[] = {10, -2, 42, -23, 12, 32, -43};
	
	// call function in a loop
	for (i = 6; i >= 0; i--)
		isPositive(numbers[i]);
	
	return 0;
}


void isPositive(int no)
{
	if (no > 0)
		printf("%3d is positive\n", no);
	else
		printf("%3d is negative\n", no);
}
