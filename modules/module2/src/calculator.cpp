#include <iostream>

#include "calculator.h"
#include "add.h"
#include "sub.h"

void print_add(int num1, int num2) {
    std::cout << add(num1, num2) << std::endl;
}

void print_sub(int num1, int num2) {
    std::cout << sub(num1, num2) << std::endl;
}
