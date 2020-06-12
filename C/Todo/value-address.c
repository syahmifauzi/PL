#include <stdio.h>

void passByValue(int a);
void passByAddress(int *a);

int main()
{
  int x = 9;

  passByValue(x);
  printf("%d\n", x);

  passByAddress(&x);
  printf("%d\n", x);

  return 0;
}

void passByValue(int a)
{
  a = 50;
}

void passByAddress(int *a)
{
  *a = 90;
}
