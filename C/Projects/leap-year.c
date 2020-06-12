/*
 * A program to find whether a given year is a leap year or not
 */

#include <stdio.h>

int main()
{
	int year, leap;

	printf("Enter the year: ");
	scanf("%d", &year);

	if ((year % 100) == 0)
		leap = (year / 400) * 400;
	else
		leap = (year / 4) * 4;                   /* int will ignore number after point */

	if (leap == year)
		printf("%d is a leap year.\n", year);
	else
		printf("%d is not a leap year.\n", year);


	return 0;
}
