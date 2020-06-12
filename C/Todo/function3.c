/*
 * Non-Void Function Without Parameter
 */
#include <stdio.h>

int AddNum();

int main()
{
  int sum;

  sum = AddNum();

  printf("%d\n", sum);
  printf("%d\n", AddNum());

  return 0;
}


int AddNum()
{
  return (4 + 5);
}
