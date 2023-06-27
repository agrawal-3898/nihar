#include <iostream>

namespace na
{
    int num1 = 10;
}

namespace nb
{
    int num2 = 20;
}

int main()
{
    printf("value of num1 from na namespace = %d\n", na::num1);
    printf("value of num2 from nb namespace = %d\n", nb::num2);
    return 0;
}