#include <stdio.h>
#define SIZE 5

int main()
{
	int x[SIZE] = {0};
	int i;
	
	for (i = 0; i < SIZE; i++) {
		printf("%d ", x[i] += 1);
	}
	
	return 0;
}
