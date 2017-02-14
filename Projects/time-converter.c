/*
 * A program to convert from seconds to
 * minutes and hours..
 */
#include <stdio.h>

int main()
{
  int sec, min, hour;

  printf("Enter total number of seconds to be converted: ");
  scanf("%d", &sec);

  hour = sec / 3600;        /* convert from sec to hour and later display THIS hour */
  sec = sec % 3600;         /* then, get the remainder of sec and store it in 'new sec' */
  min = sec / 60;           /* convert from the 'new sec' to min and later display THIS min */
  sec = sec % 60;           /* lastly, get the remainder of 'new sec' and store it in 'new new sec'
                               and later display THIS 'new new sec'*/

  printf("Hours: %d\n"      /* If you want to break a string literal onto multiple lines, */
         "Minutes: %d\n"    /* you can concatenate multiple strings together, */
         "Seconds: %d\n",   /* one on each line, like so: */
         hour, min, sec);

  return 0;
}
