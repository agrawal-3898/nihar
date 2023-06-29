#include <iostream>
using namespace std;
class Time
{
private:
    int *hrPtr;
    int *minPtr;

public:
    Time()
    {
        cout << "Inside Ctor to allocate memory" << endl;
        hrPtr = new int;
        minPtr = new int;
        *hrPtr = 10;
        *minPtr = 10;
    }

    void acceptTime()
    {
        cout << "Enter hrs and mins = ";
        cin >> *hrPtr >> *minPtr;
    }

    void displayTime()
    {
        cout << "Time = " << *hrPtr << ":" << *minPtr << endl;
    }

    ~Time()
    {
        cout << "Inside Dtor to de-allocate memory" << endl;
        delete hrPtr;
        delete minPtr;
    }
};

int main()
{
    Time t;
    t.displayTime();
    t.acceptTime();
    t.displayTime();
}