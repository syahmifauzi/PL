#include <iostream>
using namespace std;

struct Student {
    int matric;
    string name;
    int age;
};

void addRecord(Student *s, int size) {
    for (int i = 0; i < size; ++i) {
        cin >> s[i].matric
            >> s[i].name
            >> s[i].age;
    }
}

void updateRecord(Student *s, int size) {
    int matric;
    cin >> matric;
    for (int i = 0; i < size; ++i) {
        if (matric == s[i].matric) {
            s[i].matric = matric;
            cin >> s[i].name
                >> s[i].age;
        }
    }
}

void showRecords(Student *s, int size) {
    for (int i = 0; i < size; ++i) {
        cout << s[i].matric << '\t'
             << s[i].name << '\t'
             << s[i].age << endl;
    }
}

int main()
{
    Student kict[3];

    addRecord(kict, 3);
    updateRecord(kict, 3);
    showRecords(kict, 3);

    return 0;
}