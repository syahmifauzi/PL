#include <stdio.h>

int main()
{
  int dec, bin[15];

  printf("Enter decimal number to be converted into binary number: ");
  scanf("%d", &dec);

  // decimal (max digits depends on bin[size]) -> binary converter
  int i, j;
  for (i = 0; dec != 0; i++) {                   /* run outer loop as long as (dec / 2) != 0 */
    bin[i] = dec % 2;                            /* get the remainder and store into bin[] array */
    dec = dec / 2;                               /* (dec / 2) and store into dec so that we can find other remainder until (dev / 2) == 0 */
    if (dec == 0) {                              /* after all remainders has stored inside bin[] array, dec will == 0, outer loop will stop */
      for (j = i; j >= 0; j--) {                 /* and this inner loop will run */
        if (j == i) printf("Binary Number: ");   /* print this before array */
        printf("%d", bin[j]);                    /* print all values inside bin[] array reversely */
        if (j == 0) printf("\n");                /* add new line at the end of inner loop */
      }
    }
  }

/*
  int i = 0;
  do {
    bin = dec % 2;
    binary[i] = bin;
    printf("%d", binary[i]);
    dec = dec / 2;
    if (dec == 0)
      printf("\n");
    i++;
  } while (dec != 0);
*/


  // TODO: decimal -> octal converter
  // TODO: decimal -> hexadecimal converter
  // TIPS: convert from binary to octal and hexadecimal

  return 0;
}
