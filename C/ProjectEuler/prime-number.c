/*
 * List of prime numbers
 */
#include <stdio.h>

int main()
{
  int i, j, is_prime;

  for (i = 1; i < 100; i++) {
    is_prime = 0;
    for (j = 1; j <= i; j++) {
      if (i % j == 0) { // might be a prime if and only if 0 are twice ONLY
        is_prime++;
        if (i == 1 || is_prime > 2) // skip if i is 1 or  0 more than twice
          break;
      }
    }
    if (is_prime == 2)
      printf("%d, ", i);
  }

  return 0;
}
