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
  
  // OR
  
  for (i = 1; i <= 12; i++)
  	printf("%d x %d = %d", i, num, i * num);

  return 0;
}
