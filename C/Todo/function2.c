/*
 * Void Function With Parameter
 */
#include <stdio.h>

void Get();
void Display(int numbers[]);

int main()
{
  Get();

  return 0;
}


void Get()
{
  int numbers[5];

  printf("Enter 5 integers: ");
  for (int i = 0; i < 5; i++)
    scanf("%d", &numbers[i]);

  Display(numbers);

  return;
}

void Display(int numbers[])
{
  for (int i = 0; i < 5; i++)
    printf("%d ", numbers[i]);
}
