#include <iostream>
#include <fstream> // for files
#include <cstdlib> // for exit()
using namespace std;

struct Student {
    string name;
    int matricNo;
    char gender;
};

int main()
{
    string filename;
    int totalStdn;

    // write into file
    cout << "Enter class filename: ";
    cin >> filename;
    ofstream studentFile(filename.c_str());

    cout << "Enter total student: ";
    cin >> totalStdn;
    Student stdn[totalStdn];

    for (int i = 0; i < totalStdn; ++i) {
        cout << "Student name: "; cin >> stdn[i].name;
        cout << "Matric No.: "; cin >> stdn[i].matricNo;
        cout << "Gender: "; cin >> stdn[i].gender;
        studentFile << stdn[i].name << ' ' 
                    << stdn[i].matricNo << ' '
                    << stdn[i].gender << '\n';
    }

    studentFile.close();
    cout << "Your file has successfully written\n\n";


    // read from file
    ifstream inFile(filename.c_str());

    string name;
    int matricNo;
    char gender;

    inFile >> name >> matricNo >> gender;
    while (inFile.good()) {
        cout << name << ' ' << matricNo << ' ' << gender << '\n';
        inFile >> name >> matricNo >> gender;
    };

    inFile.close();
    cout << "Your file has successfully read\n\n";

    return 0;
}