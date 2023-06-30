#include <iostream>
using namespace std;

class Arithmetic
{
private:
    int num1;
    int num2;

public:
    Arithmetic(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    void div()
    {
        if (this->num2 == 0)
            throw 4.6;
        cout << "Divison = " << this->num1 / this->num2 << endl;
    }

    void mul()
    {
        if (this->num1 == 0 || this->num2 == 0)
            throw 0;
        cout << "Multiplication = " << this->num1 * this->num2 << endl;
    }
};

int main()
{
    Arithmetic a1(0, 10);
    try
    {
        a1.div();
        a1.mul();
    }
    catch (...) // Generic Catch block
    {
        cout << "something went wrong..." << endl;
    }
    return 0;
}