#include <stdio.h>

int main()
{
  int num, square, cube;

  for (num = 1; num <= 5; num++) {
    square = num * num;
    cube = num * num * num;
    if (num == 1)
      printf("%8s%8s%6s\n", "Number", "Square", "Cube");
    printf("%6d%8d%7d\n", num, square, cube);
  }

  return 0;
}
