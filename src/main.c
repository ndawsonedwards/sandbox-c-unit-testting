#include <stdio.h>
#include "mathy.h"
#include "pathy.h"


int main(int argc, char const *argv[])
{
    printf(" -- Main Application -- \n");
    int sum = add(8, 4);
    printf("sum of something is : %d", sum);

    return 0;
}
