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
    Arithmetic a1(10, 0);
    try
    {
        a1.div();
        a1.mul();
    }
    catch (int error)
    {
        cout << "You have entered num1 or num2 as 0 mul cannot be performed" << endl;
    }
    catch (double error)
    {
        cout << "You have entered num2 as 0 div cannot be performed" << endl;
    }
    return 0;
}