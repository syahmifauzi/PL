/*
 * Problem 1 (Pg. 53)
 * A program that can store and print strings,
 * a character, integer, and a floating point number
 */
 #include <stdio.h>

int main()
{
	// variables declaration
	char first_name[10], last_name[10], symbol;
	int integer;
	float fpnumber;

	// get input from user
	printf("Enter your first name: ");
	scanf("%s", first_name);

	printf("Enter your last name: ");
	scanf("%s", last_name);

	printf("Enter a character: ");
	scanf(" %c", &symbol);                        /* must have space before %c for 'enter character' after last_name */

	printf("Enter an integer: ");
	scanf("%d", &integer);

	printf("Enter a floating point number: ");
	scanf("%f", &fpnumber);

	// display back all data
	printf("\n%s %s, you have input \n", first_name, last_name);
	printf("Character: %c\nInterger: %d\nFloating Number: %.3f\n", symbol, integer, fpnumber);

	return 0;
}
