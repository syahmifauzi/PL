#include <stdio.h>

int main()
{
	int x, y, i = 10;
	
	for (x = 1; x <= 5; x++) {
		for(y = 1; y <= 6; y++)
			printf(" %d ", x);
		printf("\n");
	}
	printf("\n");
	
	for (x = 1; x <= 5; x++) {
		for(y = 1; y <= 6; y++)
			printf(" %d ", y);
		printf("\n");
	}
	printf("\n");
	
	for (x = 1; x <= 5; x++) {
		for(y = 1; y <= 3; y++) {
			printf(" %d ", i);
			i += 5;	// value of x accumulated by 5
		}
		printf("\n");
	}
	
	return 0;
}
