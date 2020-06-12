/*
 * C Program to Remove given Word from a String
 */
#include <stdio.h>
#include <string.h>

int main()
{
  int i, j, k;
  char str[100], key[20];
  char str1[10][20];
  /*
    My0xxxxxxxxxxxxxxxxx
    G0xxxxxxxxxxxxxxxxxx
    xxxxxxxxxxxxxxxxxxxx
    xxxxxxxxxxxxxxxxxxxx
    xxxxxxxxxxxxxxxxxxxx
    xxxxxxxxxxxxxxxxxxxx
    xxxxxxxxxxxxxxxxxxxx
    xxxxxxxxxxxxxxxxxxxx
    xxxxxxxxxxxxxxxxxxxx
    xxxxxxxxxxxxxxxxxxxx
   */

  k = 0;
  j = 0;
  printf("Enter string: ");
  scanf("%[^\n]s", str);

  /* Converts the string into 2D array */
  for (i = 0; str[i] != '\0'; i++) {    // NULL Character or \0 is the index of last element + 1
    if (str[i] == ' ') {
      str1[k][j] = '\0';
      k++;                              // go to new row of k (k means total number of words)
      j = 0;                            // initialize back to 0 on new row of k
    } else {
      str1[k][j] = str[i];              // char in str[i] goes into str1[k][j]
      j++;                              // go to the next col of the same row k
    }
  }
  // i = 4, k = 1, j = 1
  str1[k][j] = '\0';  // str1[1][1]

  printf("enter key: ");
  scanf("%s", key);

  /* Compares the string with given word */
  for (i = 0;i < k + 1; i++) {  // i < 2
    if (strcmp(str1[i], key) == 0) {  // str1[0], My
      for (j = i; j < k + 1; j++) // j = 0; j < 2; j++
        strcpy(str1[j], str1[j + 1]);
      k--;  // k = 0
    }
  }

  for (i = 0;i < k + 1; i++)
    printf("%s ", str1[i]);

  return 0;
}
