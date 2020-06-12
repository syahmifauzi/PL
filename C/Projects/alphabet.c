/*
 * A program to check whether the input
 * character is an alphabet or not based
 * on ASCII code..
 * Please refer to the ASCII Table for the character code
 */
#include <stdio.h>

int main()
{
  char alphabet;

  printf("Enter an alphabet: ");
  scanf("%c", &alphabet);

  // capital letter is from 65 to 90 and
  // small letter is from 97 to 122 in the ascii table
  if ((alphabet >= 65 && alphabet <= 90) || (alphabet >= 97 && alphabet <= 122))
    printf("You just enter %c\n", alphabet);
  else
    printf("You are not enter an alphabet.. hmm..\n");

  return 0;
}
