#include <iostream>
using namespace std;

class Base
{
private:
    int num1;

protected:
    int num2;

public:
    int num3;

public:
    void printBase()
    {
        cout << num1 << num2 << num3 << endl;
    }
    friend void printContentsFromBase();
};

class Derived1 : public Base
{
public:
    void printDerived1()
    {
        cout << num1 << num2 << num3 << endl;
    }
};

class Derived2 : Derived1
{
public:
    void printDerived2()
    {
        cout << num1 << num2 << num3 << endl;
    }
};

void printContentsFromBase()
{
    Base b;
    cout << b.num1 << b.num2 << b.num3 << endl;
}

int main()
{
    Base b;
    cout << b.num1 << b.num2 << b.num3 << endl;
    Derived1 d;
    cout << d.num1 << d.num2 << d.num3 << endl;
    return 0;
}