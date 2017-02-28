#include <stdio.h>

int main()
{
	int x = 1;

	while (x <= 8) {
		printf("%d\n", x);
    if (x == 5)
      break;
    x++;
	}
  printf("I will be printed but not number 6 until 8..\n");

	return 0;
}
