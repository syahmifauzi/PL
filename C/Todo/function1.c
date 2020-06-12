<<<<<<< HEAD
/*
 * Void Function Without Parameter
 */
#include <stdio.h>
#include <stdlib.h>

void LetakGaris(void);  // Function Prototype

int main()
{
  LetakGaris();
  puts("My name is Syahmi Fauzi");
  LetakGaris();

  return 0;
}


void LetakGaris() // Function Definition
{
  puts("------------------------------");

  return; // means return nothing (x letak pun xpa)
}
=======
#include <stdio.h>
#include <math.h>

int Add(int, int);	// function prototype
int Difference(int, int);

int main()
{
	int no1, no2, sum;
	
	printf("Enter 2 integers: ");
	scanf("%d%d", &no1, &no2);
	
	sum = Add(no1, no2);	// function call
	
	printf("Sum is %d\n", sum);
	
	printf("Difference is %d\n", Difference(no1, no2));

	return 0;
}


int Add(int x, int y)	// function header + function body = function definition
{
	return (x + y);
}


int Difference(int x, int y)
{
	return abs(x - y);
}
>>>>>>> 6f97e4f64bdd360dd9f561987a4528f767728c93
