
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Mathy)
{
    RUN_TEST_CASE(Mathy, Addition_Positive);
    RUN_TEST_CASE(Mathy, Addition_Negative);
}


TEST_GROUP_RUNNER(Pathy)
{
    RUN_TEST_CASE(Pathy, IsPathy);
}


