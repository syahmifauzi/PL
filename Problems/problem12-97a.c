#include <stdio.h>

int main()
{
  int exp, test, total_exp, total_test;
  float result, total_result;
  
  printf("Enter number of experiment: ");
  scanf("%d", &total_exp);
  printf("Enter number test: ");
  scanf("%d", &total_test);
  
  for (exp = 1; exp <= total_exp; exp++) {
  	printf("\nExperiment #%d: ", exp);
  	total_result = 0;
	for (test = 1; test <= total_test; test++) {
		scanf("%f", &result);
		total_result += result;
	}
	printf("Average: %.2f\n", total_result / (test-1));
  }

  return 0;
}
