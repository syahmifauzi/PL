#include <stdio.h>
#define AUTHOR "Syahmi Fauzi"	                                     /* declare constant using '#define' here */
#define AGE 20
#define NUMBER 10 + 5
#define SYMBOL '$'
#define PI 3.142

int main()
{
	printf("My name is %s and I am %d years old\n", AUTHOR, AGE);    /* print string and integer */
	printf("The constant number + 5 is %d\n", NUMBER * 5);           /* it will become 10 + 5 * 5 = 35 */
	printf("My favourite symbol is %c\n", SYMBOL);                   /* print a character */
	printf("Pi is %.3f\n", PI);                                      /* print a float */

	return 0;
}
