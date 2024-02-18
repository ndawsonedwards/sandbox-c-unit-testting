#include "unity_fixture.h"


static void RunAllTests(void)
{
  RUN_TEST_GROUP(Mathy);
  RUN_TEST_GROUP(Pathy);
}


int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}