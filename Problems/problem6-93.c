#include <stdio.h>

int main()
{
	int start, step_by, stop;
	char ans;
	
	do {
		printf("Input start: ");
		scanf("%d", &start);
		printf("Input step by: ");
		scanf("%d", &step_by);
		printf("Input stop: ");
		scanf("%d", &stop);
		
		printf("The sequence is\n");
		for (; start <= stop; start += step_by)     /* initialization is when the user input start value */
			printf("%d\t", start);
			
		printf("Do you want to repeat? (y/n): ");
		scanf(" %c", &ans);
	} while (ans == 'Y' || ans == 'y');
	
	return 0;
}
