/*
 * Sequential Search
 */
#include <stdio.h>
#define SIZE 10

int main()
{
	int x[] = {3, 4, 6, 1, 9, 8, 5, 2, 0, 7};
	int i, match = -1, key;
	
	printf("Enter a number to search: ");
	scanf("%d", &key);
	
	for (i = 0; i < SIZE && match == -1; i++) {
		if (key == x[i]) {
			match = i;
			break;	// because all unique numbers
		}
	}
	
	if (match != -1)
		printf("Number found at index %d\n", match);
	else
		printf("Number not found.\n");
	
	return 0;
}
