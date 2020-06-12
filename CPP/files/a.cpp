#include <iostream> // input output to files
#include <fstream>  // working with files
using namespace std;

int main()
{
    // create a file object named syhmiFile
    ofstream syhmiFile;
    // associate the object with what file?
    syhmiFile.open("pizza.txt");
    // cout inside the file instead of terminal
    syhmiFile << "I love pizza and pizza really loves me!\n";
    // we always have to close the file - to free computer memory
    syhmiFile.close();

    return 0;
}