/*
 * Even Fibonacci numbers
 */
#include <stdio.h>

int main()
{
  int i, first = 0, second = 1, next, sum_even = 0;

  for (i = 0; i < 100; i++) {
    if (i <= 1)
      next = i;
    else {
      next = first + second;
      first = second;
      second = next;
    }
    if (next % 2 == 0) // Fibonacci pattern: 011011011011011.. to infinity
      sum_even += next;
    if (next > 4000000)
      break;
    printf("%d, ", next);
  }
  printf("\nSum of Even numbers: %d\n", sum_even);

  return 0;
}
