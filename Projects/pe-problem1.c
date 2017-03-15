#include <stdio.h>

int main()
{
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			printf("%i ", sum);
			sum += 1;
		}
	}
	printf("Sum is %i\n", sum);

	return 0;
}
