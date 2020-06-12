// send to syahmibahar@gmail.com
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

struct Name {
    char brand[10];
    char type[10];
};

int generateRand(int min, int max, int curr, Name item[4]) {
    int randNo;
    do {
        randNo = (rand() % max + min);
        if (strcmp(item[curr].type, item[randNo].type) != 0)
            return randNo;
    } while (1);
}

int main()
{
    srand(time(NULL));

    Name items[4] = {{"Adidas", "Shoes"}, {"Toyota", "Vehicle"},
                     {"KFC", "Food"}, {"Nike", "Shoes"}};

    for (int i = 0; i < 4; ++i) {
        cout << items[i].brand << endl;
        cout << "A. " << items[i].type << endl
             << "B. " << items[generateRand(0, 4, i, items)].type << endl;
    }

    return 0;
}