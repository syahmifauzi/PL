#include <iostream>
using namespace std;

struct Student {
    int matric;
    string name;
    int age;
};

int main()
{
    // Offset - is a way of identifying a location 
    //          given a starting point
    //==================================================
    char str1[] = "Hello world!";

    cout << *(str1 + 6) << endl;


    // Pointer with variable
    //==================================================
    int num1 = 50;
    // int *ptNum1 = &num1; // same as 2 lines below
    int *ptNum1;
    ptNum1 = &num1;

    // Without using pointer
    cout << "Value of num1: " << num1 << endl;
    cout << "Address of num1: " << &num1 << endl;
    
    // If using pointer
    cout << "Value of num1: " << *ptNum1 << endl;
    cout << "Address of num1: " << ptNum1 << endl;


    // Pointer with array
    //==================================================
    int arr[] = {10, 20, 30, 40, 50};
    int *ptArr = arr; // same as &arr[0]

    // Without using pointer
    cout << "Value of arr[2]: " << arr[2] << endl;
    cout << "Address of arr[2]: " << &arr[2] << endl;
    
    // If using pointer
    cout << "Value of arr[2]: " << *(ptArr + 2) << endl;
    cout << "Address of arr[2]: " << ptArr + 2 << endl;


    // Pointer with structure
    //==================================================
    Student std1;
    Student *ptStd = &std1;

    (*ptStd).matric = 1718485; // same as ptStd->matric
    (*ptStd).name = "Paangg";
    (*ptStd).age = 20;

    cout << ptStd->matric << ' '
         << ptStd->name << ' '
         << ptStd->age << endl;

    return 0;
}