#include "add.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <spdlog/spdlog.h>

namespace {

TEST(Module1Test, Add) {
    spdlog::set_level(spdlog::level::off);
    EXPECT_EQ(add(15, 5), 20);
};

}
