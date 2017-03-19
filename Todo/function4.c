/*
 * Non-Void Function With Parameter
 */
#include <stdio.h>

float QuotientTwoNo(int, int);

int main()
{
  float ans;

  ans = QuotientTwoNo(5, 0);

  if (ans != 0)
    printf("Ans: %.2f\n", ans);
  return 0;
}


float QuotientTwoNo(int x, int y)
{
  float quotient;
  if (y == 0) {
    printf("Cannot divide by zero\n");
    return 0;
  }
  else
    quotient = (float) x / y;

  return quotient;
}
