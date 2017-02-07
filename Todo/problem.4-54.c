#include <stdio.h>

int main()
{
	// vars declaration
	float length, width, area, perimeter;
	
	// get input from user
	printf("Please enter length in meters: ");
	scanf("%f", &length);
	
	printf("Please enter width in meters: ");
	scanf("%f", &width);
	
	// calculation for area and parameter
	area = length * width;
	perimeter = length * 2 + width * 2;
	
	// display area and parameter to user
	printf("The area is %.2f square meters\n", area);
	printf("The perimeter is %.2f meters\n", perimeter);
	
	return 0;
}
