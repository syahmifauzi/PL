#include <stdio.h>

int main()
{
	int class_size, count, mark, total_mark, pass, fail, class_no = 0;
	float avg_mark;
	char ans;
	
	do {
		class_no++;
		pass = 0;
		fail = 0;
		total_mark = 0;
		printf("\nClass #%d\nEnter class size: ", class_no);
		scanf("%d", &class_size);
		
		for (count = 1; count <= class_size; count++) {
			do {
				printf("Student #%d mark: ", count);
				scanf("%d", &mark);
				if (mark < 0 || mark > 100)
					printf("Invalid! Re-enter mark\n");
			} while (mark < 0 || mark > 100);
			
			// check if pass or fail
			if (mark >= 50)
				pass++;
			else
				fail++;
			
			// add all marks and store it it total_mark
			total_mark += mark;
		}
		
		avg_mark = (float)total_mark / class_size;
		printf("Total pass: %d\nTotal fail: %d\n", pass, fail);
		printf("The average mark is %.2f\n\n", avg_mark);
	
		printf("Do you have any more class? (Y/N): ");
		scanf(" %c", &ans);	
	} while (ans == 'Y' || ans == 'y');
	
	return 0;
}
