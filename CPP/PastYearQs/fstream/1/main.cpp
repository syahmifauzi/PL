#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int matric;
    string name;
    int age;
};

void addRecordToFile(Student *s);
void getRecordFromFile(Student *s);

int main()
{
    Student std;
    addRecordToFile(&std);
    getRecordFromFile(&std);

    // Display data from structure
    cout << std.matric << ' '
         << std.name << ' '
         << std.age << endl;

    return 0;
}

void addRecordToFile(Student *s) {
    // Get filename from user
    string filename;
    cout << "Enter filename: "; cin >> filename;

    // Get data and save into structure
    cout << "Matric no: "; cin >> s->matric;
    cout << "Name: "; cin >> s->name;
    cout << "Age: "; cin >> s->age;

    // Save data from structure to file
    ofstream writeFile(filename.c_str());
    if (!writeFile.fail()) {
        cout << "File successfully opened!" << endl;
        writeFile << s->matric << ' '
                  << s->name << ' '
                  << s->age << '\n';
    } else {
        cout << "File failed to be opened!" << endl;
    }
    writeFile.close();
}

void getRecordFromFile(Student *s) {
    // Get filename from user
    string filename;
    cout << "Enter filename: "; cin >> filename;

    // Get data from file to structure
    ifstream readFile(filename.c_str());
    if (readFile.good()) {
        cout << "Successfully read the file" << endl;
        readFile >> s->matric
                 >> s->name
                 >> s->age;
    } else {
        cout << "Failed to read the file" << endl;
    }
    readFile.close();
}
