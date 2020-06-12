/*
 * Accumulate the value of sum as total of 1 to 5
 */
#include <stdio.h>

int main()
{
	int x = 1, sum = 0;
	
	while (x <= 5) {
		sum+=x;
		printf("Inside loop: x = %d, sum = %d\n", x, sum);
		x++;
	}
	printf("Outside loop: x = %d, sum = %d\n", x, sum);
	
	
	return 0;
}
