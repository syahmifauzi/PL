#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int min = 1, max = 200000;
	int i, randNo;
	
	srand(time(NULL));
	
	for (i = 1; i <= 500; i++) {
		randNo = min + rand() % (max - min + 1);
		printf("Family #%d: %d\n", i, randNo);		
	}
	
	return 0;
}
