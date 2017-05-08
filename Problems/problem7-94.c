#include <stdio.h>

int main()
{
  int ans;
  
  printf("6 x 7 ?\n");
  scanf("%d", &ans);
  
  while (ans != 42) {
  	printf("No. Please try again\n");
  	scanf("%d", &ans);
  	// getchar();
  }
  
  printf("Very Good!");

  return 0;
}
