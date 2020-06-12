#include <stdio.h>
#include <math.h>

int main()
{
	double x, y, z;
	
	printf("Enter a number: ");
	scanf("%lf", &x);
	
	y = sqrt(x);
	
	printf("sqrt of %.2f is %.2f\n", x, y);
	
	z = pow(y, 2); // or 0.5 for sqrt in pow() function
	printf("power of %.2f to %.2f is %.2f\n", y, 2.0, z);
	
	printf("PI is %.16f\n", M_PI);
	return 0;
}
