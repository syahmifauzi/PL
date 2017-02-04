#include <stdio.h>

int main()
{
	int a = 3;
	char c;
	
	// condition ? statement1 : statement2
	a < 10 ? printf("true") : printf("false");
	
	c = (a < 10) ? 'T' : 'F';
	printf("\nC = %c", c);
	
	c = (a < 10) ? ((c < 5) ? 't' : 'f') : 'F';
	printf("\nC = %c", c);
	
	return 0;
}
