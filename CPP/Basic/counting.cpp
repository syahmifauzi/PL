#include <iostream>

int main()
{
    int count = 8, result;

    result = count++; // post increment
    std::cout << "The result of post increment is "
              << result << std::endl;

    result = ++count; // pre-increment
    std::cout << "The result of pre increment is "
              << result << std::endl;


    return 0;
}
