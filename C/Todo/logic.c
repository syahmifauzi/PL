#include <stdio.h>

int main()
{
  char package_code;

  printf("Enter package code: ");
  scanf("%c", &package_code);

  while (package_code != 'A' && package_code != 'B') {
      printf("Invalid package code! Please re-enter: ");
      scanf(" %c", &package_code);
  }

  printf("Thank You\n");

  return 0;
}
