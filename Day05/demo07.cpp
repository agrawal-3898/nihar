#include <iostream>
using namespace std;

class Base
{
public:
    void f1()
    {
        cout << "base::f1" << endl;
    }
    void f2()
    {
        cout << "base::f2" << endl;
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
    Derived d;
    d.f1();
    d.f2();
    d.f3();
    return 0;
}