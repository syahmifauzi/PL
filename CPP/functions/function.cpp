#include <iostream>
#include <cmath>
using namespace std;

void difference(int, int); // function prototype

template <class SMIN>
SMIN findMin(SMIN x, SMIN y)
{
    return (x > y) ? y : x;
}

void calcAvg(int, int);

template <class SYAHMI>
void subtract(SYAHMI x, SYAHMI y)
{
    SYAHMI result = x - y;

    cout << "Subtract = " << result << endl;

    return;
}


int main()
{
	double num1, num2;
    int minNum;

	cout << "Enter first number: "; cin >> num1;
	cout << "Enter second number: "; cin >> num2;
	cout << endl;

	difference(num1, num2);
	minNum = findMin(num1, num2);
    calcAvg(num1, num2);
    subtract(4.5, 2.2);

	cout << "Minimum = " << minNum << endl;
	return 0;
}


void difference(int x, int y) // function definition
{
	int result = abs(x - y);

	cout << "Difference = " << result << endl;

	return;
}


void calcAvg(int x, int y)
{
    double avg = (x + y) / 2.0;

    cout << "Average = " << avg << endl;

    return;
}


