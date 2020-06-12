/* generate random alphabets from A(65) to Z(90) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int randNo, i;
	srand(time(NULL));
	
	for (i = 1; i <= 10; i++) {
		randNo = 65 + rand() % (90 - 65 + 1);
		printf("No %d = alphabet is %c\n", randNo, randNo);
	}
	
	return 0;
}
