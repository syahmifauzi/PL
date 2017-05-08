#include <stdio.h>
#define SIZE 6

int main()
{
	float deci_num[SIZE], total = 0.0, highest, lowest;
	int i;
	
	// loop for input data
	printf("Enter %d floating point numbers: ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf("%f", &deci_num[i]);
	
	// loop to accumulate total
	for (i = 0; i < SIZE; i++)
		total += deci_num[i];
		
	// loop to find highest number
	highest = deci_num[0];
	for (i = 0; i < SIZE; i++)
		if (deci_num[i] > highest)
			highest = deci_num[i];
	printf("Highest value: %.1f\n", highest);
	
	// loop to find lowest number
	lowest = deci_num[0];
	for (i = 0; i < SIZE; i++)
		if (deci_num[i] < lowest)
			lowest = deci_num[i];
	printf("Lowest value: %.1f\n", lowest);
	
	// print total and average
	printf("Total = %.1f\nAverage = %.1f\n", total, total / SIZE);
	
	// print all value using array
	printf("The number in order:\n\t");
	for (i = 0; i < SIZE; i++)
		printf("%.1f ", deci_num[i]);
		
	printf("\nThe numbers in reverse order:\n\t");
	for (i = SIZE - 1; i >= 0; i--)
		printf("%.1f ", deci_num[i]);
		
	// sum of all positive fpn
	// sum of all negative fpn
	
	
	return 0;
}
