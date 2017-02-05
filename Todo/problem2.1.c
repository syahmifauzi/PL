#include <stdio.h>

int main()
{
	char symbol;
	int integer;
	float fpnumber;
	
	prinf("Enter a character: ");
	scanf("%c", &symbol);
	
	printf("Enter an integer: ");
	scanf("%d", &integer);
	
	printf("Enter a floting point number: ");
	scanf("%f", &fpnumber);
	
	printf("Character: %c\nInterger: %d\nFloating Number: %f\n", symbol, integer, fpnumber);
	
	return 0;
}
