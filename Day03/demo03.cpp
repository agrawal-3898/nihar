#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;

public:
    Time(int hr, int min)
    {
        cout << "Inside Parameterized Constructor" << endl;
        this->hr = hr;
        this->min = min;
        displayTime();
    }

    void displayTime()
    {
        cout << "Time = " << this->hr << ":" << this->min << endl;
    }

    // Destructor
    ~Time()
    {
        cout << "Inside Destructor" << endl;
        displayTime();
    }
};

int main()
{
    Time t1(10, 10); // Inside Parameterized ctor
    Time t2(11, 11);
    Time t3(12, 15);

    return 0;
}