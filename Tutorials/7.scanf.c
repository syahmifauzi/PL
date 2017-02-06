#include <stdio.h>

int main()
{
	char symbol, first_name[10], last_name[10];     /* declare multiple variables with the same data type in a single declaration */
	int age;

	// get data from user
	printf("Enter your first name: ");
	scanf("%s", first_name);                        /* get the input (string in this case) from user and store it in first_name */
	printf("Enter your last name: ");
	scanf("%s", last_name);
	printf("Enter your age: ");
	scanf("%d", &age);                              /* must append Address Operator '&' for all data types except strings */
	printf("Enter your favourite character: ");
	scanf(" %c", &symbol);                          /* here, you need a space before %c */

	// display data to screen
	printf("You are %s %s and your age is %d years old..\n", first_name, last_name, age);
	printf("Your favourite character is %c\n\n", symbol);

	return 0;
}

/* see problem2-1.c */
