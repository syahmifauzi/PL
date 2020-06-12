/*
 * Problem 2 (pg. 92)
 * Switch only recomended for char or int
 * 
 */
#include <stdio.h>

int main()
{
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (num % 2 == 0)
		printf("%d is an even number\n", num);
	else
		printf("%d is an odd number\n", num);
		
		
	
	switch (num % 2)   /* if the remainder is 0, it is an even number */
	{
		case 0:
			printf("%d is an even number\n", num);
			break;
		case 1:
			printf("%d is an odd number\n", num);
			break;
		default:
			printf("Please enter only positive integer\n");
	}
	
	return 0;
}
