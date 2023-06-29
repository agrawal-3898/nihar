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

    void displayTime()
    {
        cout << "Time = " << this->hr << ":" << this->min << endl;
    }
};

int main()
{
    Time t;
    cout << "Before change" << endl;
    t.displayTime();
    // t.hr = 12;
    t.setHr(12);
    cout << "After change" << endl;
    t.displayTime();
    return 0;
}