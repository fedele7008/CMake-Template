#include "calculator.h"
#include "add.h"
#include "sub.h"

#include <iostream>
#include <spdlog/spdlog.h>

void print_add(int num1, int num2) {
    spdlog::info("Print_add({}, {})", num1, num2);
    fmt::print("{}\n", add(num1, num2));
}

void print_sub(int num1, int num2) {
    spdlog::info("Print_sub({}, {})", num1, num2);
    fmt::print("{}\n", sub(num1, num2));
}
