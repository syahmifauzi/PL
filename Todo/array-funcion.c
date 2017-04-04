#include <stdio.h>
#define SIZE 6

void Max_Num(float []);
void Min_Num(float []);
void Modify(float []); // will modify the array

int main()
{
	float deci_num[SIZE], total = 0.0;
	int i;
	
	// loop for input data
	printf("Enter %d floating point numbers: ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf("%f", &deci_num[i]);
	
	// loop to accumulate total
	for (i = 0; i < SIZE; i++)
		total += deci_num[i];
		
	// function calls to find highest and lowest value
	Max_Num(deci_num); // pass-by-reference
	Min_Num(deci_num);
	
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
	
	// call function modify
	Modify(deci_num);
	printf("\n\nAfter call Modify(), array deci_num[] in main is \n");
	for (i = 0; i < SIZE; i++)
		printf("%.1f ", deci_num[i]);
	
	return 0;
}


void Max_Num(float max[])
{
	int i;
	float highest = max[0];
	// loop to find highest number
	for (i = 0; i < SIZE; i++)
		if (max[i] > highest)
			highest = max[i];
	printf("Highest value: %.1f\n", highest);	
}


void Min_Num(float min[])
{
	int i;
	float lowest = min[0];
	// loop to find lowest number
	for (i = 0; i < SIZE; i++)
		if (min[i] < lowest)
			lowest = min[i];
	printf("Lowest value: %.1f\n", lowest);	
}


void Modify(float x[])
{
	int i;
	for (i = 0; i < SIZE; i++)
		x[i] += 10;	// add 10 to each element in array x, which is reference to array deci_num. so, array deci_num will change
}
