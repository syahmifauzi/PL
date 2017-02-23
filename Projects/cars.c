#include <stdio.h>

int main()
{
  int year, weight, kelas;
  float fee;

  printf("Enter model year: ");
  scanf("%d", &year);

  printf("Enter weight (kg): ");
  scanf("%d", &weight);

  if (year <= 2000) {
    if (weight < 2300) {
      kelas = 1;
      fee = 25.5;
    } else if (weight < 3500) {
      kelas = 2;
      fee = 26.5;
    } else {
      kelas = 3;
      fee = 27.5;
    }
  } else if (year <= 2010) {
    if (weight < 2300) {
      kelas = 4;
      fee = 28.5;
    } else if (weight < 3500) {
      kelas = 5;
      fee = 29.5;
    } else {
      kelas = 6;
      fee = 30.5;
    }
  } else {
    if (weight < 3500) {
      kelas = 7;
      fee = 31.5;
    } else {
      kelas = 8;
      fee = 32.5;
    }
  }

  if (year && weight) {
    printf("Class: %d\n", kelas);
    printf("Fee: RM%.2f\n", fee);
  }

  return 0;
}
