// clear && g++ main.cpp calculation.cpp && ./a.out
#include <iostream>
#include <cstdio>
#include "calculation.h"
using namespace std;

int main()
{
    int a = 6, b = 12, c = 23;

    Calculation gcd;
    printf("### Greatest Common Divisor (GCD)\n");
    printf("gcd_method_1(%d,%d) = %d\n", a, b, gcd.gcd_method_1(a, b));
    printf("gcd_method_2(%d,%d) = %d\n", a, c, gcd.gcd_method_2(a, c));
    printf("gcd_method_3(%d,%d) = %d\n", c, b, gcd.gcd_method_3(c, b));

    Calculation lcm;
    printf("\n### Lowest Common Multiple (LCM)\n");
    printf("lcm_method_1(%d,%d) = %d\n", a, b, gcd.lcm_method_1(a, b));
    printf("lcm_method_2(%d,%d) = %d\n", b, c, gcd.lcm_method_2(b, c));

    Calculation primeNo;
    printf("\n### Prime Number\n");
    printf("Prime Numbers between 50 and 100 are:\n");
    for (int i = 51; i < 100; i++)
        if (primeNo.isPrimeNumber(i))
            printf("%d ", i);

    Calculation fac;
    printf("\n\n### Factorial\n");
    printf("%d! = %lld\n", a, fac.factorial(a));    
    printf("%d! = %lld\n", b, fac.factorial(b));

    Calculation base;
    printf("\n### Changing Base, b\n");
    printf("124 (b10)   = %ld (b8)\n", base.changeBase(10, 8, 124));
    printf("249 (b10)   = %ld (b5)\n", base.changeBase(10, 5, 249));
    printf("59 (b10)    = %ld (b2)\n", base.changeBase(10, 2, 59));
    printf("111011 (b2) = %ld (b10)\n", base.changeBase(2, 10, 111011));
    printf("1444 (b5)   = %ld (b10)\n", base.changeBase(5, 10, 1444));
    printf("174 (b8)    = %ld (b10)\n", base.changeBase(8, 10, 174));
    
    Calculation logic;
    printf("\n### Truth Table\n");
    logic.truthTable();

    // printf("\n### Relation & Diagraph\n");
    
    return 0;
}