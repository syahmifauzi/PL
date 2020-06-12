#include <cmath>
#include <cstdio>
#include "calculation.h"

// GCD functions
//===============================================
int Calculation::gcd_method_1(int a, int b) {
    if (a == 0)
        return b;
    return this->gcd_method_1(b%a, a);
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