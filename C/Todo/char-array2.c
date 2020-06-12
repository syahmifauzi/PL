/*
 * 2D array of characters
 * Enter 5 names and age of each person
 * Print back the names and age
 * Names in 2D array, age in 1D array
 */
#include <stdio.h>
#define PERSON 2
#define NAMELEN 20

int main()
{
	char names[PERSON][NAMELEN];	// 2D array (PERSON for each name, NAMELEN for each char in each PERSON)
	int age[PERSON];				// 1D array
	int i, j;
	
	printf("Enter %d names and age: \n", PERSON);
	for (i = 0; i < PERSON; i++) {
		printf("Person #%d:\n", i + 1);
		printf("\tName: ");
		gets(names[i]);
		printf("\tAge: ");
		scanf("%d", &age[i]);
		fflush(stdin);
	}
	puts("\nDisplay names and age");
	for (i = 0; i < PERSON; i++)
		printf("Name: %s\tAge: %d\n", names[i], age[i]);
	
	printf("\nThe letter at index names[1][2] is %c\n", names[1][2]);
	
	return 0;
}
