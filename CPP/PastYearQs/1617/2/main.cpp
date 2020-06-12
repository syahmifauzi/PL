#include <iostream>
#include <fstream>
using namespace std;

struct stud_record {
    int category;
    string kuliyyah;
    int students;
};

int main()
{
    int totalUG, totalPG;
    totalUG = totalPG = 0;
    stud_record stdns[10];

    // Read data from file
    ifstream readFile("mahallah.asiah.txt");
    if (!readFile.fail()) {
        cout << "File successfully read!" << endl;
        for (int i = 0; i < 10; ++i) {
            // Stores data in structure
            readFile >> stdns[i].category
                     >> stdns[i].kuliyyah
                     >> stdns[i].students;
            // Get total UG & PG students
            if (stdns[i].category == 1)
                totalUG += stdns[i].students;
            else if (stdns[i].category == 2)
                totalPG += stdns[i].students;
        }
    }
    readFile.close();

    // Display total students of UG & PG
    cout << "UG = " << totalUG << endl
         << "PG = " << totalPG << endl; 

    return 0;
}