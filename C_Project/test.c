#include <assert.h>
#include "math_functions.h"

void test_add_positive(void)
{
    assert(add(2,3) == 5);
}

void test_add_negative(void)
{
    assert(add(-2,-3) == -5);
}

void test_add_zero(void)
{
    assert(add(0,0) == 0);
}

int main(void)
{
    test_add_positive();
    test_add_negative();
    test_add_zero();

    return 0;
}
