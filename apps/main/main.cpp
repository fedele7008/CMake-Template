#include <iostream>
#include "calculator.h"
#include "add.h"
#include "sub.h"

int main(int argc, char *argv[]) {
    print_add(1, 0);
    print_sub(3, 1);
    std::cout << add(2, 1) << std::endl;
    std::cout << sub(6, 2) << std::endl;
    return 0;
}
