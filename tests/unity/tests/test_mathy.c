#include "unity.h"
#include "unity_fixture.h"

#include "mathy.h"

TEST_GROUP(Mathy);


TEST_SETUP(Mathy)
{
}

TEST_TEAR_DOWN(Mathy)
{
}

TEST(Mathy, Addition_Positive)
{
    TEST_ASSERT_EQUAL(15, add(10,5));
    TEST_ASSERT_EQUAL(100000256, add(100000251, 5));
}

TEST(Mathy, Addition_Negative)
{

    TEST_ASSERT_EQUAL(-1, add(10,-11));
    TEST_ASSERT_EQUAL(-5, add(-10,5));
}
