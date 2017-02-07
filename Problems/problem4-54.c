/*
 * Problem 4 (Pg. 54)
 * A program to calculates area and perimeter
 */
#include <stdio.h>

int main()
{
	// variables declaration
	float length, width, area, perimeter;

	// get input from user
	printf("Please enter length in meters: ");
	scanf("%f", &length);

	printf("Please enter width in meters: ");
	scanf("%f", &width);

	// calculate area and perimeter
	area = length * width;
	perimeter = length * 2 + width * 2;

	// display area and perimeter
	printf("The area is %.2f square meters\n", area);
	printf("The perimeter is %.2f meters\n", perimeter);

	return 0;
}
