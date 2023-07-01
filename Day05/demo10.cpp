#include <iostream>
using namespace std;

class Base
{
public:
    void f1()
    {
        cout << "Base::f1" << endl;
    }
    void f2()
    {
        cout << "Base::f2" << endl;
    }
};

class Derived : public Base // Inheritance
{
public:
    void f3()
    {
        cout << "Dervied::f3" << endl;
    }
};

int main()
{
    Base *bptr = new Derived(); // Upcasting
    bptr->f1();
    bptr->f2();
    // bptr->f3(); // Object slicing
    Derived *dptr = (Derived *)bptr; // Downcasting
    dptr->f3();
    delete bptr;
    return 0;
}