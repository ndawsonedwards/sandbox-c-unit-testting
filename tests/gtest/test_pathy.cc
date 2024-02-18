#include "gtest/gtest.h"

extern "C" {
#include "pathy.h"
}

TEST(pathy, ok) {
  ASSERT_TRUE(isPath());
}
