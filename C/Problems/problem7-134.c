#include <stdio.h>

void Patient();
float GetBP();

int main()
{
	Patient();
	
	return 0;
}


void Patient()
{
	int patient, total_patient;
	float avg;
	
	printf("How many patients? ");
	scanf("%d", &total_patient);
	
	for (patient = 1; patient <= total_patient; patient++) {
		printf("Patient %d\n", patient);
		avg = GetBP();
		printf("\tAverage: %.2f\n", avg);
	}	
}


float GetBP()
{
	float bp1, bp2;
	
	printf("\tBlood Pressure 1: ");
	scanf("%f", &bp1);
	printf("\tBlood Pressure 2: ");
	scanf("%f", &bp2);
	
	return (bp1 + bp2) / 2;
}
