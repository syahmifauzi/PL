/*
 * Declare a 2D array to store 3 quiz marks for 5 students
 * Get the quiz marks from user - input
 * print back all the marks in table form
 * calc the total mark for each student, and print the avg
 * calc the total of each quiz, and print the avg by quizzes
 */
#include <stdio.h>
#define QUIZ 3
#define STUDENT 2

void Avg_by_Student(float [][QUIZ]);
void Avg_by_Quiz(float [][QUIZ]);

int main()
{
	float mark[STUDENT][QUIZ];	// declaration of a 2D array
	int i, j;
	
	// get input from user
	for (i = 0; i < STUDENT; i++) {
		printf("Student #%d\n", i+1);
		for (j = 0; j < QUIZ; j++) {
			printf("\tQuiz #%d: ", j+1);
			scanf("%f", &mark[i][j]);
		}
	}
	
	// print the array in a table form
	printf("\nStudent Marks\n");
	printf("             Quiz1   Quiz2   Quiz3\n");
	printf("----------------------------------\n");
	for (i = 0; i < STUDENT; i++) {
		printf("Student %d | ", i+1);
		for (j = 0; j < QUIZ; j++)
			printf("%5.1f   ", mark[i][j]);
		printf("\n");	// print new line at the end of each row
	}
	
	Avg_by_Student(mark);
	Avg_by_Quiz(mark);
	
	return 0;
}

void Avg_by_Student(float x[][QUIZ])
{
	int i, j;
	float total[STUDENT] = {0, 0, 0};
	
	for (i = 0; i < STUDENT; i++) {
		for (j = 0; j < QUIZ; j++)
			total[i] += x[i][j];	// store total quiz in array student
	}
	
	printf("\nAverage by Student\n");
	for (i = 0; i < STUDENT; i++)
		printf("Student %d:\tTotal:%.1f\tAvg:%.1f\n", i+1, total[i], total[i]/QUIZ);
}

void Avg_by_Quiz(float x[][QUIZ])
{
	int i, j;
	float total2[QUIZ] = {0, 0, 0};
	
	for (i = 0; i < STUDENT; i++) {
		for (j = 0; j < QUIZ; j++)
			total2[j] += x[i][j];
	}
	
	printf("\nAverage by Quiz\n");
	for (i = 0; i < QUIZ; i++)
		printf("Quiz %d:\tTotal:%.1f\tAvg:%.1f\n", i+1, total2[i], total2[i]/STUDENT);
}
