#include "trans.h"

int main()
{
    // same with fstream
    // ofstream outFile("file.txt"); // same as 2 lines below
    // ofstream outFile;
    // outFile.open("file.txt");
    // outFIle.close();

    // First object
    Transport car(160, "White");
    car.setColor("gray");
    car.setTotalTyres(4);

    cout << "Speed: " << car.getSpeed() << endl;
    cout << "COlor: " << car.getColor() << endl;
    cout << "Total tayar: " << car.getTotalTyres() << endl << endl;

    // Second object
    Transport lorry(120, "Red");
    lorry.setTotalTyres(16);

    cout << "Speed: " << lorry.getSpeed() << endl;
    cout << "COlor: " << lorry.getColor() << endl;
    cout << "Total tayar: " << lorry.getTotalTyres() << endl << endl;

    return 0;
}