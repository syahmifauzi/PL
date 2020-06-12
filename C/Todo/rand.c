#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int randNo, i;
	srand(time(NULL));	// always start with different seed
	
	for (i = 1; i <= 10; i++) {
		randNo = 10 + rand() % (40 - 10 + 1);
		printf("Random number is %d\n", randNo);
	}
	
	return 0;
}
