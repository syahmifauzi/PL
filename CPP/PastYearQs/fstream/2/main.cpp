#include <iostream>
#include <fstream>
using namespace std;

const string filename = "student.dat";

struct Student {
    int matric;
    string name;
    int age;
};

void addRecordToFile(Student *s, int size);
void getRecordFromFile(Student *s, int size);

int main()
{
    int size = 20;

    // Allocate memory and point a pointer to
    // the first address of the structure array
    // Student *std = new Student[size];

    Student std[size];
    addRecordToFile(std, 1);
    getRecordFromFile(std, size);

    // Display data from structure
    for (int i = 0; i < size; ++i) {
        cout << std[i].matric << ' '
             << std[i].name << ' '
             << std[i].age << endl;
    }

    return 0;
}

void addRecordToFile(Student *s, int size) {
    // Get data and save into structure
    for (int i = 0; i < size; ++i) {
        cout << "Matric no: "; cin >> s[i].matric;
        cout << "Name: "; cin >> s[i].name;
        cout << "Age: "; cin >> s[i].age;
        cout << endl;
    }

    // Save data from structure to file
    ofstream writeFile(filename.c_str(), ios::app);
    if (!writeFile.fail()) {
        cout << "File successfully opened!" << endl;
        for (int i = 0; i < size; ++i) {
            writeFile << s[i].matric << ' '
                      << s[i].name << ' '
                      << s[i].age << '\n';
        }
    } else {
        cout << "File failed to be opened!" << endl;
    }
    writeFile.close();
}

void getRecordFromFile(Student *s, int size) {
    // Get data from file to structure
    ifstream readFile(filename.c_str());
    if (readFile.good()) {
        cout << "Successfully read the file" << endl;
        cout << "size: " << size << endl;
        for (int i = 0; i < size; ++i) {
            readFile >> s[i].matric
                     >> s[i].name
                     >> s[i].age;
        }
    } else {
        cout << "Failed to read the file" << endl;
    }
    readFile.close();
}
