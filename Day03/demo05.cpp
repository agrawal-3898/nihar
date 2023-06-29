#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;

public:
    Time()
    {
        this->hr = 10;
        this->min = 10;
    }

    // Mutators
    void setHr(int hr)
    {
        this->hr = hr;
    }

    // Inspectors
    int getMin()
    {
        return this->min;
    }

    void displayTime()
    {
        cout << "Time = " << this->hr << ":" << this->min << endl;
    }
};

int main()
{
    Time t;
    // cout << "minutes = " << t.min << endl;
    cout << "minutes = " << t.getMin() << endl;
    return 0;
}