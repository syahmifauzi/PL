/*
 * A program to check whether the input
 * integer is even or odd
 */
#include <stdio.h>

int main()
{
  int num;

  printf("Enter an integer: ");
  scanf("%d", &num);


  // using ternary operator
  num % 2 == 0 ? printf("Even\n") : printf("Odd\n");
  // or
  printf("%s\n", num % 2 == 0 ? "Even" : "Odd");


  // using if...else statement
  if (num % 2 == 0)                                     /* true if num % 2 == 0 */
    printf("Even\n");
  else
    printf("Odd\n");
  // or
  if (num % 2)                                          /* true if num % 2 != 0 */
    printf("Odd\n");
  else
    printf("Even\n");
  // or
  if (num & 1)                                          /* using bitwise operator */
    printf("Odd\n");
  else
    printf("Even\n");


  return 0;
}
