#include "io.h"
#include <iostream>

int readNumber()
{
    int number{};
    std::cout << "Give me a number: ";

    std::cin >> number;

    return number;
}

void writeAnswer(int num)
{
    std::cout << "Number: " << num;
}
