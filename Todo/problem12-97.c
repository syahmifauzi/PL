#include <stdio.h>

int main()
{
  int experiment, test, outer, inner;
  float result, avg;

  printf("Enter number of experiment: ");
  scanf("%d", &experiment);
  printf("Enter number of test result: ");
  scanf("%d", &test);

  for (outer = 1; outer <= experiment; outer++) {
    printf("Experiment #%d: \n", outer);

    avg = 0;
    for (inner = 1; inner <= test; inner++) {
      printf("Result #%d: ", inner);
      scanf("%f", &result);
      avg += result;
      if (inner == test)
        avg /= test;
    }

    printf("Average: %.2f\n", avg);
  }

  return 0;
}
