// character arrray @ string
#include <stdio.h>

int main()
{
	int i;
	char greeting[] = "Assalamualaikum";
	
	puts(greeting);
	
	for (i = 14; i >= 0; i--)
		putchar(greeting[i]);
	
	return 0;
}
