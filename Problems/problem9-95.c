#include <stdio.h>
#define SECRETNO 432

int main()
{
  int trial = 1, ans;
  
  printf("I have a secret number. Please guess?\n");
  scanf("%d", &ans);	// trial = 1
  
  while (ans != SECRETNO) {
  	if (ans < SECRETNO)
	  printf(">> Too Low. Try again\n");
	else
	  printf(">> Too High. Try again\n");
	trial++;	// accumulator
	scanf("%d", &ans);
  }
  
  printf(">> Excellent! You guessed the number %d times!\n", trial);

  return 0;
}
