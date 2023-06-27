#include <iostream>

int num = 10; // global namespace scope

namespace na
{
    int num = 100;
}

namespace Parle
{
    struct Biscuit
    {
    };

    struct Chips
    {
    };

    struct Choclate
    {
    };

} // namespace Parle

namespace Britania
{
    struct Biscuit
    {
    };

    struct Chips
    {
    };

    struct Choclate
    {
    };
} // namespace name

int main()
{
    int num = 20;
    printf("value of num from local scope = %d\n", num);
    printf("value of num from global scope = %d\n", ::num);
    printf("value of num1 from na namespace = %d\n", na::num);

    return 0;
}