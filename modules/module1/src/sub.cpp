#include "sub.h"

#include <spdlog/spdlog.h>

int sub(int num1, int num2) {
    spdlog::info("sub({}, {})", num1, num2);
    return num1 - num2;
}