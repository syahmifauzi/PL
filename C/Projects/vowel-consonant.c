/*
 * A program to check whether an alphabet is vowel
 * (A,E,I,O,U) or consonant by using functions
 */
#include <stdio.h>

/*
 * difference between a lowercase and it's corresponding
 * uppercase alphabet is 32, ('a' - 'A' = 32)
 */
#define LOWERCASE_TO_UPPERCASE_DIFFERENCE 32                      /* lowercase - 32 == uppercase */

int is_vowel(char c);
int is_lower_case(char c);

int main()
{
  char c;

  printf("Enter an alphabet: ");
  scanf("%c", &c);

  if (is_vowel(c))                                                /* Check if input alphabet is a member of set {A,E,I,O,U,a,e,i,o,u} */
    printf("%c is a vowel\n", c);
  else
    printf("%c is a consonant\n", c);

  return 0;
}

/*
 * fuction to check whether an alphabet is vowel or not
 * returns 1 if passed character is vowel otherwise 0
 */
int is_vowel(char c)
{
  if (is_lower_case(c))
    c = c - LOWERCASE_TO_UPPERCASE_DIFFERENCE;                    /* convert lowercase to uppercase alphabet */

  if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    return 1;
  else
    return 0;
}

/*
 * function to check whether an alphabet is lowercase or not
 * returns 1 for lowercase characters otherwise 0
 */
int is_lower_case(char c)
{
  if (c >= 'a' && c <= 'z')
    return 1;
  else
    return 0;
}
