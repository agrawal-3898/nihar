#include <iostream>
using namespace std;

// Default Argument Function
void add(int n1, int n2, int n3 = 0, int n4 = 0)
{
    cout << "Addition = " << n1 + n2 + n3 + n4 << endl;
}

int main()
{
    add(10, 20);
    add(10, 20, 30);
    add(10, 20, 30, 40);
}