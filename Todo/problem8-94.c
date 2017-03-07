#include <stdio.h>

int main()
{
	int class_size, count, mark, total_mark = 0, pass = 0, fail = 0;
	float avg_mark;
	
	printf("Enter class size: ");
	scanf("%d", &class_size);
	
	count = 1;
	while (count <= class_size) {
		do {
			printf("Student #%d mark: ", count);
			scanf("%d", &mark);
			if (mark < 0 || mark > 100)
				printf("Invalid! Re-enter mark\n");
		} while (mark < 0 || mark > 100);
		
		// check if pass or fail
		if (mark > 50)
			pass++;
		else
			fail++;
		
		// add all marks and store it it total_mark
		total_mark += mark;
		
		count++;
	}
	
	avg_mark = (float)total_mark / class_size;
	printf("Total pass: %d\nTotal fail: %d\n", pass, fail);
	printf("The average mark is %.2f\n", avg_mark);	
	
	return 0;
}
