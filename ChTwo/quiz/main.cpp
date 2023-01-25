#include "io.h"

#include <iostream>

int readNumber();
void writeAnswer(int num);

int main()
{
    int value(readNumber());
    writeAnswer(value);
}
