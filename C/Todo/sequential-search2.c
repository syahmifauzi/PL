/*
 * Sequential Search if More Than 1 Similar Number
 */
#include <stdio.h>
#define SIZE 10

int main()
{
	int x[] = {3, 3, 3, 1, 3, 8, 5, 2, 2, 7};
	int i, match[SIZE] = {-1}, key, z = 0;
	
	printf("Enter a number to search: ");
	scanf("%d", &key);
	
	for (i = 0; i < SIZE; i++) {
		if (key == x[i]) {
			match[z] = i;
			z++;
		}
	}
	
	if (match[0] != -1) {
		printf("Number found at index:\n");
		for (i = 0; i < z; i++)
			printf("%d ", match[i]);
	}
	else
		printf("Number not found.\n");
	
	return 0;
}
