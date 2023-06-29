#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;

public:
    // Parameterless constructor
    Time()
    {
        cout << "Inside Parameterless Constructor" << endl;
        this->hr = 10;
        this->min = 10;
    }

    // parameterized Ctor
    Time(int hr, int min)
    {
        cout << "Inside Parameterized Constructor" << endl;
        this->hr = hr;
        this->min = min;
    }

    void displayTime()
    {
        cout << "Time = " << this->hr << ":" << this->min << endl;
    }
};

int main()
{
    Time t1;
    t1.displayTime(); // 10:10

    Time t2(11, 11);
    Time t3(12, 15);
    t3.displayTime(); // 12:15
    t2.displayTime(); // 11:11
}