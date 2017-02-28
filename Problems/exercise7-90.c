#include <stdio.h>

int main()
{
  int i, num;

  printf("Enter a number: ");
  scanf("%d", &num);

  i = 1;
  while (i < 13) {
    printf("%d x %d = %d\n", i, num, i * num);
    i++;
  }

  return 0;
}
