#include <assert.h>

int add(int a, int b);

void test_add(void)
{
    assert(add(2,3) == 5);
    assert(add(1,1) == 2);
}

int main(void)
{
    test_add();

    return 0;
}
