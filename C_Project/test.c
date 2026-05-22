#include <assert.h>
#include "math_functions.h"

void test_add(void)
{
    assert(add(2,3) == 5);
}

int main(void)
{
    test_add();
    return 0;
}
