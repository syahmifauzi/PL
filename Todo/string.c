#include <stdio.h>

int main()
{
	char name[30];
	
	puts("Enter your full name: ");
	gets(name);	// not similar with scanf("%s", name);
	
	puts("Your name is ");
	puts(name);
	
	fflush(stdin);	// better ada nie
	puts("Enter another name: ");
	gets(name);
	
	puts("Your name is ");
	puts(name);
	
	return 0;
}
