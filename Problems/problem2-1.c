#include <stdio.h>

int main()
{
	// variables declaration
	char first_name[10];
	char last_name[10];
	char symbol;
	int integer;
	float fpnumber;

	// get input from user
	printf("Enter your first name: ");
	scanf("%s", first_name);

	printf("Enter your last name: ");
	scanf("%s", last_name);

	printf("Enter a character: ");
	scanf(" %c", &symbol);                     /* must have space before %c for 'enter character' after last_name */

	printf("Enter an integer: ");
	scanf("%d", &integer);

	printf("Enter a floting point number: ");
	scanf("%f", &fpnumber);

	// display back all data
	printf("\n%s %s, you have input \nCharacter: %c\nInterger: %d\nFloating Number: %.3f\n", first_name, last_name, symbol, integer, fpnumber);

	return 0;
}
