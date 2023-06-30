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
        cout << "Inside Parmerterless ctor" << endl;
        hrPtr = new int;
        minPtr = new int;
    }
    void acceptTime()
    {
        cout << "Enter hr and min = ";
        cin >> *hrPtr >> *minPtr;
    }
    void displayTime()
    {
        cout << "Time = " << *hrPtr << ":" << *minPtr << endl;
    }
    void setHr(int hr)
    {
        *hrPtr = hr;
    }
    ~Time()
    {
        delete hrPtr;
        delete minPtr;
    }
};

int main()
{
    Time t1;
    t1.acceptTime();
    t1.displayTime();
    Time t2 = t1; // Default Copy Ctor
    t2.displayTime();

    t1.setHr(7);
    t1.displayTime();
    t2.displayTime();
    return 0;
}