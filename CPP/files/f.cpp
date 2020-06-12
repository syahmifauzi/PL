#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void updateUser(string file) {
    string username, password;
    ofstream userFile(file);
    if (userFile.is_open()) {
        cout << "Username: "; cin >> username;
        cout << "Password: "; cin >> password;
        userFile << username << " " << password << endl;
        userFile.close();
    }
}

int main()
{
    for (int i = 0; i < 3; i++)
        updateUser("user" + to_string(i) + ".txt");

    return 0;
}