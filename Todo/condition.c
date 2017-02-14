/*
 * enter quiz mark and print passed or failed
 */
#include <stdio.h>

int main()
{
	int mark;
	
	printf("Enter your quiz mark: ");
	scanf("%d", &mark);
	
	if (mark >= 50)
		printf("Congratulation!! You Passed..\n");
	else 
		printf("You Failed..\n");
	
	return 0;
}
