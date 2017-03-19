/*
 * Void Function With Parameter
 */
#include <stdio.h>

void ProductThreeNo(int, int, int);

int main()
{
  int num1, num2, num3;
  printf("Enter three integers: ");
  scanf("%d%d%d", &num1, &num2, &num3);

  ProductThreeNo(num1, num2, num3);

  return 0;
}


void ProductThreeNo(int x, int y, int z)
{
  int product = x * y * z;
  printf("Product of %d, %d and %d is %d\n", x, y, z, product);

  return;
}
