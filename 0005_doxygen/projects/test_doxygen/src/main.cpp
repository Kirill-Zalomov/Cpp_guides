#include <iostream>
#include "MathOperations.h"

int main() {
    int a = 5;
    int b = 3;
    int result = MathOperations::add(a, b);
    std::cout << "Сумма " << a << " и " << b << " равна " << result << std::endl;
    return 0;
} 
