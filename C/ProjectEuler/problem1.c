/*
 * Multiples of 3 and 5
 */
#include <stdio.h>

int main()
{
  int x, sum = 0;

  for (x = 1; x < 1000; x++) {
    if (x % 3 == 0 || x % 5 == 0)
      sum += x;
  }
  printf("Sum: %d\n", sum);

  return 0;
}
