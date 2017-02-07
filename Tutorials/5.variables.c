#include <stdio.h>

int main()
{
  /* Declaration and Initialization of Variables */
  /* data_type var_name = value */
  int my_age       = 20;
  long int big_num = 1234567891234567;
  char one_char    = '%';                   /* 1 byte = 8 bits = 1 character */
  char my_name[7]  = "Syahmi";              /* at least, must provide extra one byte for null char */
  float pi         = 3.142;
  double big_pi    = 3.14159265359;
  // todo: void

  printf("Age = %d\n", my_age);
  printf("Big Num = %ld\n", big_num);
  printf("A Character = %c\n", one_char);
  printf("Name = %s\n", my_name);
  printf("PI = %.4f\n", pi);
  printf("Big PI = %.16lf\n", big_pi);

  return 0;
}
