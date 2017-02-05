#include <stdio.h>

int main()
{
	// variables declaration
	char firstName[10];
	char lastName[10];
	char symbol;
	int integer;
	float fpnumber;
	
	// get input from user
	printf("Enter your first name: ");
	scanf("%s", firstName);
	
	printf("Enter your last name: ");
	scanf("%s", lastName);
	
	printf("Enter a character: ");
	scanf(" %c", &symbol); // must have space before %c for 'enter character' after lastName
	
	printf("Enter an integer: ");
	scanf("%d", &integer);
	
	printf("Enter a floting point number: ");
	scanf("%f", &fpnumber);
	
	// display back all data
	printf("%s %s, you have input \nCharacter: %c\nInterger: %d\nFloating Number: %.3f\n", firstName, lastName, symbol, integer, fpnumber);
	
	return 0;
}
