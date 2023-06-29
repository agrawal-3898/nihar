#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int; // Dynamic Memory Allocation
    *ptr = 10;
    cout << "Value at heap section = " << *ptr << endl;
    delete ptr; // Free the memory
}