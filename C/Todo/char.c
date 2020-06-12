#include <stdio.h>

int main()
{
	char symbol;
	
	printf("Enter a symbol: ");
	symbol = getchar();	// similar to scanf("%c", &symbol);
	
	putchar(symbol);
	putchar(symbol);
	
	return 0;
}
