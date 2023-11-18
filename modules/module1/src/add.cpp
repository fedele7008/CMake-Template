#include "add.h"

#include <spdlog/spdlog.h>

int add(int num1, int num2) {
    spdlog::info("add({}, {})", num1, num2);
    return num1 + num2;
}
