#include <iostream>
#include <string>
using namespace std;

// global structure
struct Person {
    string name;
    int age;
};

int main()
{
    Person student1;

    student1.name = "paan";
    student1.age = 30;

    cout << student1.name << endl
         << student1.age << endl;


    Person student2 = {"amad", 20};

    cout << student2.name << endl
         << student2.age << endl;

    // array
    Person stdn[] = {{"syhmi", 20},
                     {"ziyad", 100}};

    for (int i = 0; i < 2; ++i)
        cout << stdn[i].name << endl << stdn[i].age << endl;

    // local structure
    struct {
        string name;
        int matric;
    } student;

    return 0;
}