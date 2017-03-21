/*
 * Problem 1 (Pg. 130)
 */
#include <stdio.h>

float Celsius_at_Depth(float);
void Fahrenheit(float);

int main()
{
	float depth, celsius;
	
	printf("Enter depth in meters: ");
	scanf("%f", &depth);
	
	celsius = Celsius_at_Depth(depth);
	printf("Degree in Celsius: %.2f\n", celsius);
	Fahrenheit(celsius);
	
	printf("END OF PROGRAM!");
	
	return 0;
}


float Celsius_at_Depth(float depth)
{
	return (10 * depth / 1000 + 20);
}


void Fahrenheit(float celsius)
{
	printf("Degree in Fahrenheit: %.2f\n\n", 1.8 * celsius + 32);
}
