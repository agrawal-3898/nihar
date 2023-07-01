#include <iostream>
using namespace std;

template <typename T>
void add(T n1, T n2)
{
    cout << "Addition = " << n1 + n2 << endl;
}

int main()
{
    add(10, 20);
    add(10.22, 20.12);
    return 0;
}