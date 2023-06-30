#include <iostream>
using namespace std;

void changeNum1(int *nPtr)
{
    cout << "Address of ptr = " << &nPtr << endl;
    cout << "Address of num1 = " << nPtr << endl;
    *nPtr = 20;
}

void changeNum1ByRef(int &nref)
{
    cout << "Address of nref = " << &nref << endl;
    cout << "Address of num1 = " << nref << endl;
    nref = 20;
}

int main()
{
    int num1 = 10;
    // int *ptr = &num1;
    // int &ref = num1;
    // cout << "Address of num1 = " << &num1 << endl;
    // cout << "Address of ref = " << &ref << endl;
    // cout << "Value inside ref = " << ref << endl;
    // cout << "value of num1 = " << num1 << endl;

    cout << "Num1 before change = " << num1 << endl;
    // changeNum1(&num1);
    changeNum1ByRef(num1);
    cout << "Num1 after change = " << num1 << endl;
    return 0;
}