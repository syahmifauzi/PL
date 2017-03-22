#include <stdio.h>

float GetStrawberry();
int GetStudent();
void Calculate(float, int);
void Display(float, float);

int main()
{
	float total_weight;
	int total_student;
	
	total_weight = GetStrawberry();
	total_student = GetStudent();
	Calculate(total_weight, total_student);
	
	return 0;
}


float GetStrawberry()
{
	float weight;
	
	printf("Enter total weight of strawberry (in kg): ");
	scanf("%f", &weight);
	
	return weight;
}


int GetStudent()
{
	int total_student;
	
	printf("How many students?: ");
	scanf("%d", &total_student);
	
	return total_student;
}


void Calculate(float total_weight, int total_student)
{
	float farmer_gets, each_student_gets;
	farmer_gets = total_weight / 2;	// in kg
	each_student_gets = (farmer_gets * 1000 / total_student) / 10;	// each strawberry is 10g
	
	Display(farmer_gets, each_student_gets);
}


void Display(float farmer_gets, float each_student_gets)
{
	printf("Farmer gets %.2fkg of strawberries\n", farmer_gets);
	printf("Each student gets %.0f strawberries\n", each_student_gets);	
}
