#include "unity.h"
#include "unity_fixture.h"

#include "pathy.h"

TEST_GROUP(Pathy);


TEST_SETUP(Pathy)
{
}

TEST_TEAR_DOWN(Pathy)
{
}

TEST(Pathy, IsPathy)
{
    TEST_ASSERT_TRUE(isPath());

}

