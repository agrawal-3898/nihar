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

    void displayTime()
    {
        cout << "Time = " << this->hr << ":" << this->min << endl;
    }

    // Destructor
    ~Time()
    {
        cout << "Inside Destructor" << endl;
    }
};

int main()
{
    Time t1;          // Inside Parameterless Ctor
    t1.displayTime(); // 10:10
    return 0;
}