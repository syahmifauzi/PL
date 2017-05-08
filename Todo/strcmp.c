#include <stdio.h>
#include <string.h>

int main()
{
  char ans[4];

  printf("Yes or No? ");
  scanf("%s", ans);

  if (strcmp(ans, "Yes") == 0)
    puts("Boleh");
  else
    puts("Takleh");

    return 0;
}
