#include <iostream>

int main()
{
    char ch1, ch2;
    char newChar;

    ch1 = 'a';
    ch2 = 'm';
    newChar = ch1 + ch2;
    std::cout << sizeof(ch1) << std::endl;
    std::cout << "The character stored in newChar is " << newChar << std::endl;

    return 0;
}
