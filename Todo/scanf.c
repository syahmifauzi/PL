#include <stdio.h>

int main()
{
	char ch;
	int no;
	float fpnumber;

	printf("\nEnter a character followed by an integer and a floating point number: ");
	scanf("%c%d%f", &ch, &no, &fpnumber);

	printf("You just entered %c, %d and %f\n\n", ch, no, fpnumber);

	return 0;
}
