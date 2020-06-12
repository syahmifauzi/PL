#include <iostream>
#include <iomanip>
#include <fstream>
#include "variables.h"
using namespace std;

int main()
{
    books = new Book[10];

    cout << "Enter title as break to quit" << endl;
    title = "";
    while (title != "break") {
        cout << "Enter title: "; getline(cin, title);
        cout << "Enter author: "; getline(cin, author);
        newBook = {title, author};
        books[idx++] = newBook;
    }

    cout << left
         << setw(3) << "No"
         << setw(20) << "Title"
         << setw(20) << "Author"
         << endl;
        
    for (int i = 0; i < idx; ++i) {
        cout << left
             << setw(3) << i + 1
             << setw(20) << books[i].title
             << setw(20) << books[i].author
             << endl;
    }

    // Working with files
    // input data to file
    ofstream outFile("books.dat", ios::app); // to append new input (will not override file)
    // outFile("books.dat", ios::app); // also same
    if (!outFile.fail()) {
        for (int i = 0; i < idx; ++i) {
            outFile << books[i].title << ';'
                    << books[i].author << ';'
                    << endl;
        }
    }
    outFile.close();

    return 0;
}