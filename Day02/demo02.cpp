#include <iostream>
using namespace std;
void add(int, int);
void add(int, int, int);
void add(double, double);
void add(float, float);
void add(int, double);
void add(double, int);

int main()
{
    add(10, 20);
    add(10, 20, 30);
    add(10.20, 20.22);
    add(10.20f, 20.22f);
    add(10, 20.22);
    add(10.20, 20);

    return 0;
}

void add(int n1, int n2)
{
    cout << "Addition of 2 int numbers = " << n1 + n2 << endl;
}

void add(int n1, int n2, int n3)
{
    cout << "Addition of 3 int numbers = " << n1 + n2 + n3 << endl;
}

void add(double n1, double n2)
{
    cout << "Addition of 2 double numbers = " << n1 + n2 << endl;
}

void add(float n1, float n2)
{
    cout << "Addition of 2 float numbers = " << n1 + n2 << endl;
}

void add(int n1, double n2)
{
    cout << "Addition of 1st int and 2nd double number = " << n1 + n2 << endl;
}

void add(double n1, int n2)
{
    cout << "Addition of 1st double and 2nd int number = " << n1 + n2 << endl;
}
