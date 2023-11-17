#include "add.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(Module1Test, Add) {
  EXPECT_EQ(add(15, 5), 20);
}

}  // namespace