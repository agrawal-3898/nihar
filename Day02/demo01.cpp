#include <iostream>
using namespace std;

inline void add(int num1, int num2)
{
    cout << "Addition = " << num1 + num2 << endl;
}

int main()
{
    add(10, 20);
    // cout << "Addition = " << 10 + 20 << endl;
    return 0;
}