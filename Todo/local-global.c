#include <stdio.h>

int a = 10;

int main()
{
	printf("%d\n", a);
	FuncB();
	printf("%d\n", a);
	FuncB();
	return 0;
}

void FuncB()
{
	int a = 20;
	printf("%d\n", a);
	a += 5;
}
