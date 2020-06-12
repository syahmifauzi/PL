/* Decision making structures require that the programmer
 * specifies one or more conditions to be evaluated or tested
 * by the program, along with a statement or statements to be
 * executed if the condition is determined to be true, and
 * optionally, other statements to be executed if the condition
 * is determined to be false. - tutorialspoint
 */
#include <stdio.h>

int main()
{
	/*
	 * enter quiz mark and print passed or failed
	 */
	int mark;

	printf("Enter your quiz mark: ");
	scanf("%d", &mark);

	if (mark >= 50)
		printf("Congratulation!! You Passed..\n");
	else
		printf("You Failed..\n");


	/***** OTHER FORM ********************************
	// only if statement
	if (condition-1) {
		statement-1;
	}

	// or "one condition with else statement"
	if (condition-1) {
	 	statement-1;
 	} else {
		statement-2;
	}

	// or "multiple condition"
	if (condition-1) {
		statement-1;
	} else if (condition-2) {
		statement-2;
	} else {
		statement-3;
	}
	
	// or "nested if else statement"
	if (condition-1) {
		if (condition-1-1) {
			statement-1-1;
		} else if (condition-1-2) {
			statement-1-2;
		} else {
			statement-1-3;
		}
	} else {
		statement-2;
	}
	***********************************************/

	return 0;
}
