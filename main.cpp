// main.cpp
#include <iostream>
#include "square.h"

int main() {
    int number = 5;
    int result = SquareCalculator::square(number);

    std::cout << "Square of " << number << " is: " << result << std::endl;

    return 0;
}
