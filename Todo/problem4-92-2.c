#include <stdio.h>

int main()
{
	int year;
	char status;
	float salary, raise;
	
	printf("Enter status (F/P): ");
	scanf("%c", &status);
	
	printf("Enter year of service: ");
	scanf("%d", &year);
	
	printf("Enter your current salary: ");
	scanf("%f", &salary);
	
	
	switch (status)
	{
		case 'F':
		case 'f':
			if (year < 5)
				raise = 4.0;
			else
				raise = 5.0;
			printf("Your new salary is: %.2f\n", salary + salary * (raise / 100));
			break;
		
		case 'P':
		case 'p':
			if (year < 5)
				raise = 2.5;
			else
				raise = 3.0;
			printf("Your new salary is: %.2f\n", salary + salary * (raise / 100));
			break;
		
		default:
			printf("\nWrong status entered!\n");
	}
	
	
	return 0;
}
