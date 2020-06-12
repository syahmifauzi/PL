#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdio>
using namespace std;

class Calculation {
    public:
        // GCD
        int gcd_method_1(int a, int b);
        int gcd_method_2(int a, int b);
        int gcd_method_3(int a, int b);
        // LCM
        int lcm_method_1(int a, int b);
        int lcm_method_2(int a, int b);
        // Prime Number
        bool isPrimeNumber(int a);
        // Factorial (!)
        long long int factorial(int a);
        // Changing Base
        long int changeBase(int from, int to, int n);
        // Logic (Truth Table)
        bool truthValue(int a, int b, char opr);
        void truthTable();
};


// GCD functions
//===============================================
int Calculation::gcd_method_1(int a, int b) { // 15 24
    if (a == 0)
        return b;
    return this->gcd_method_1(b%a, a); // 9 15
}

int Calculation::gcd_method_2(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int Calculation::gcd_method_3(int a, int b) {
    int temp, gcd;
    // swap a & b if b > a
    if (b > a) {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = 1; i <= b; ++i)
        if (a % i == 0 && b % i == 0)
            gcd = i;
    return gcd;
}


// LCM functions
//===============================================
int Calculation::lcm_method_1(int a, int b) {
    int max = (a > b)? a : b;
    do {
        if (max % a == 0 && max % b == 0)
            return max;
        ++max;
    } while (1);
}

int Calculation::lcm_method_2(int a, int b) {
    int gcd = gcd_method_1(a, b);
    return ((a * b) / gcd);
}


// Prime Number
//===============================================
bool Calculation::isPrimeNumber(int n) {
    for (int i = 2; i < n; ++i)
        if (n % i == 0)
            return false; // mean n is not prime
    return true; // else, n is prime
}


// Factorial
//===============================================
long long int Calculation::factorial(int a) {
    long long int total = 1;
    while (a > 0) {
        total *= a;
        --a;
    };
    return total;
}


// Changing Base (base from -> base to) (of n)
//===============================================
long int Calculation::changeBase(int from, int to, int n) {
    long int postfix = 1,
             output = 0,
             temp, i = 0;
    if (from == 10) {
        while (n != 0) {
            output += n % to * postfix;
            n /= to;
            postfix *= 10;
        };
    } else {
        while (n != 0) {
            temp = n % 10;
            n /= 10;
            output += temp * pow(from, i);
            ++i;
        };
    }
    return output;
}


// Logic (Truth Table)
//===============================================
bool Calculation::truthValue(int a, int b, char opr) {
    switch (opr) {
        case '&':
            return a & b;
        case '|':
            return a | b;
        case '^':
            return a ^ b;
    }
}

void Calculation::truthTable() {
    char opr;
    for (int i = 0; i < 3; ++i) {
        if (i == 0) {
            printf("Conjunction, AND (&)\n");
            printf("| x | y | x AND y |\n");
            opr = '&';
        } else if (i == 1) {
            printf("Disjunction, OR (|)\n");
            printf("| x | y | x  OR y |\n");
            opr = '|';
        } else if (i == 2) {
            printf("Exclusive Or, XOR (^)\n");
            printf("| x | y | x XOR y |\n");
            opr = '^';
        }
        printf("| %d | %d |    %d    |\n", 1, 1, this->truthValue(1, 1, opr));
        printf("| %d | %d |    %d    |\n", 1, 0, this->truthValue(1, 0, opr));
        printf("| %d | %d |    %d    |\n", 0, 1, this->truthValue(0, 1, opr));
        printf("| %d | %d |    %d    |\n\n", 0, 0, this->truthValue(0, 0, opr));
    }
    printf("Negation, NOT (~)\n");
    printf("| x | ~x |\n");
    printf("| %d |  %d |\n", 0, !0);
    printf("| %d |  %d |\n", 1, !1);
}


int main()
{
    int a = 6, b = 12, c = 23;

    Calculation gcd;
    printf("### Greatest Common Divisor (GCD)\n");
    printf("gcd_method_1(%d,%d) = %d\n", 6, 12, gcd.gcd_method_1(6, 12));
    printf("gcd_method_2(%d,%d) = %d\n", 6, 12, gcd.gcd_method_2(6, 12));
    printf("gcd_method_3(%d,%d) = %d\n", 6, 12, gcd.gcd_method_3(6, 12));

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