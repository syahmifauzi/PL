#include <stdio.h>

int main()
{
	int n;
	char c;

	printf("Enter a number: ");
	scanf("%d", &n);

	fflush(stdin);	// fflush(stdin) is undefined in current C standard, so not all compiler will understand it.. instead..
	
	printf("Enter a character: ");
	scanf(" %c", &c);	// use blank space if your compiler cannot understand fflush(stdin)

	printf("You just enter n = %d, c = '%c', c = %d\n", n, c, c);

	return 0;
}
