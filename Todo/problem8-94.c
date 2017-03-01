#include <stdio.h>
#define SECRETNO 432

int main()
{
	int class_size, mark, student;
	
	printf("Size of class? ");
	scanf("%d", &class_size);
	
	for (student = 1; student <= class_size; student++) {
		printf("Size of class? ");
		scanf("%d", &class_size);
		
	}
	
	return 0;
}
