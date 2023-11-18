#include "calculator.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <string>

namespace {

TEST(PrintTest, PrintAdd) {
    testing::internal::CaptureStdout();
    print_add(3, 8);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "11\n");
};

TEST(PrintTest, PrintSub) {
    testing::internal::CaptureStdout();
    print_sub(15, 8);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "7\n");
};

}
