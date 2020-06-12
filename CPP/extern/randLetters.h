#include <iostream>
#include <cstdlib>
using namespace std;

void randLetters() {
    char letter;
    for (int i = 0; i < 3; i++) {
        letter = (rand() % 26) + 65; // or 'A'
        cout << letter;
    }
}
