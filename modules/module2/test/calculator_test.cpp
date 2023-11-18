#include "calculator.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <spdlog/spdlog.h>
#include <string>

namespace {

TEST(PrintTest, PrintAdd) {
    spdlog::set_level(spdlog::level::off);
    testing::internal::CaptureStdout();
    print_add(3, 8);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "11\n");
};

TEST(PrintTest, PrintSub) {
    spdlog::set_level(spdlog::level::off);
    testing::internal::CaptureStdout();
    print_sub(15, 8);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "7\n");
};

}
