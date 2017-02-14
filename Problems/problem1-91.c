/*
 * Problem 1 (Pg. 91)
 * A program that print type of damage
 * based on the input Richter scale
 */
#include <stdio.h>

int main()
{
	float scale;

	printf("Enter a Richter scale: ");
	scanf("%f", &scale);

	if (scale < 5.0)
		printf("Little damage\n");
	else if (scale < 5.5)
		printf("Some damage\n");
	else if (scale < 6.5)
		printf("Serious damage\n");
	else if (scale < 7.5)
		printf("Disaster\n");
	else
		printf("Catastrophe\n");

	return 0;
}
