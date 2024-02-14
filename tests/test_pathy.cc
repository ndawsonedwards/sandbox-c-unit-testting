#include "gtest/gtest.h"

extern "C" {
#include "pathy.h"
}

TEST(pathy, ok) {
  ASSERT_EQ(isPath, true);
}

TEST(testy, not_ok) {
  ASSERT_EQ(customer_check(0), 0);  
}