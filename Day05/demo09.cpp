#include <iostream>
using namespace std;

class A
{
public:
    void f1()
    {
        cout << "A::f1()" << endl;
    }
};

class B : virtual public A
{
public:
    void f2()
    {
        f1();
        cout << "B::f2()" << endl;
    }
};

class C : virtual public A
{
public:
    void f3()
    {
        f1();
        cout << "C::f3()" << endl;
    }
};

class D : public B, public C
{
public:
    void f4()
    {
        f1();
        f2();
        f3();
        cout << "D::f4()" << endl;
    }
};
int main()
{

    return 0;
}