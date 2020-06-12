#include <stdio.h>

int main()
{
  char name[7] = "Syahmi";

  /* Encrypt Name */
  for (int i = 0; i < 7; i++)
    printf("%c", name[i] += 5);

  printf("\n%s\n", name);

  /* Decrypt Name */
  for (int i = 0; i < 7; i++)
    printf("%c", name[i] -= 5);

  printf("\n%s\n", name);

  return 0;
}
