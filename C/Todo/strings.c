#include <stdio.h>
#include <string.h>

void GetStr(char str1[], char str2[]);

int main()
{
  char str1[15], str2[15];

  /* strcat() */
  GetStr(str1, str2);
  strcat(str1, str2);
  printf("strcat():\nstr1: %s\nstr2: %s\n\n", str1, str2);

  /* strncat() */
  GetStr(str1, str2);
  strncat(str1, str2, 3);
  printf("strncat(,,3):\nstr1: %s\nstr2: %s\n\n", str1, str2);

  /* strcpy() */
  GetStr(str1, str2);
  strcpy(str1, str2);
  printf("strcpy():\nstr1: %s\nstr2: %s\n\n", str1, str2);

  /* strncpy() */
  GetStr(str1, str2);
  strncpy(str1, str2, 3);
  printf("strncpy(,,3):\nstr1: %s\nstr2: %s\n\n", str1, str2);

  /* strcmp() */
  GetStr(str1, str2);
  printf("strcmp(): %d\n\n", strcmp(str1, str2));

  /* strncmp() */
  GetStr(str1, str2);
  printf("strncmp(,,3): %d\n\n", strncmp(str1, str2, 3));

  // /* strncmpi() */
  // GetStr(str1, str2);
  // printf("strcmpi(): %d\n\n", strcmpi(str1, str2));

  /* strlen() */
  GetStr(str1, str2);
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  printf("strlen():\nstr1: %d\nstr2: %d\n\n", len1, len2);

  // /* strlwr() */
  // GetStr(str1, str2);
  // printf("strlwr()\nstr1: %s\nstr2: %d\n\n", strlwr(str1), strlwr(str2));
  //
  // /* strupr() */
  // GetStr(str1, str2);
  // printf("strupr()\nstr1: %s\nstr2: %d\n\n", strupr(str1), strupr(str2));
  //
  // /* strrev() */
  // GetStr(str1, str2);
  // printf("strrev()\nstr1: %s\nstr2: %d\n\n", strrev(str1), strrev(str2));

  return 0;
}

void GetStr(char str1[], char str2[])
{
  printf("Enter str1 & str2: ");
  scanf("%s%s", str1, str2);
}
