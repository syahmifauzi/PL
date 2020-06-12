/*
 * Muhammad Syahmi Fathimi bin Ahmad Fauzi 1715845
 * Muhammad Farhan bin Azhar 1718485
 */
#include <iostream>
using namespace std;

void generatePrimes(int n, int arr[]) {
    int i, index = 0;
    bool isPrime = true;
    // Check if n is a prime number
    // If it is, break the loop,
    // store n in arr[0], print n & return
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        arr[index] = n;
        cout << arr[index] << endl;
        return;
    }
    // Else, as long as n is even,
    // store 2 in arr[index], print 2,
    // divides n by 2 & must increment the index
    while (n % 2 == 0) {
        arr[index] = 2;
        cout << arr[index] << " ";
        n /= 2;
        index++;
    }
    // From here, n is surely odd, so i = 3, 5, 7,..
    // same process as n % 2 (above)
    for (i = 3; i <= n; i += 2) {
        while (n % i == 0) {
            arr[index] = i;
            cout << arr[index] << " ";
            n /= i;
            index++;
        }
    }
}

int commonPrimes(int n1[], int n2[]) {
    int hcpf = 1;
    for (int i = 0; n1[i] != 0; i++)
        for (int j = 0; n2[j] != 0; j++)
            if (n1[i] == n2[j])
                hcpf = n1[i];
    return hcpf; // return 1 if no CPF
}

int main()
{
    int N1, N2;

    cout << "Enter two integer values separated by a space: ";
    cin >> N1 >> N2;
    
    typedef int int32a[N1];
    typedef int int32b[N2];

    // initialize all element to 0s
    // to make it easier for condition (avoid garbage value)
    int32a num1 = {0};
    int32b num2 = {0};

    cout << endl;
    cout << "Prime factors of " << N1 << ":" << endl;
    generatePrimes(N1, num1);

    cout << endl << endl;
    cout << "Prime factors of " << N2 << ":" << endl;
    generatePrimes(N2, num2);

    cout << endl << endl;
    cout << "Highest Common Prime Factor for "
         << N1 << " and " << N2 << " is "
         << commonPrimes(num1, num2) << endl;

    return 0;
}