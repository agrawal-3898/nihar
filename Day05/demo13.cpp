#include <iostream>
using namespace std;

// abstract class
class Base
{
public:
    void f1()
    {
        cout << "Base::f1" << endl;
    }
    virtual void f2() = 0; // pure virtual
};

class Derived : public Base // Inheritance
{
public:
    // function overridng
    void f2()
    {
        cout << "Derived::f2" << endl;
    }
    void f3()
    {
        cout << "Dervied::f3" << endl;
    }
};

int main()
{
    Base *bptr = new Derived();
    bptr->f1();
    bptr->f2();
    delete bptr;
    return 0;
}