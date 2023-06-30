#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;

public:
    void acceptTime()
    {
        cout << "Enter hr and min = ";
        cin >> this->hr >> this->min;
    }
    void displayTime()
    {
        cout << "Time = " << this->hr << ":" << this->min << endl;
    }
    void setHr(int hr)
    {
        this->hr = hr;
    }
};

int main()
{
    Time t1;
    t1.acceptTime();
    t1.displayTime();
    Time t2 = t1; // Default Copy Ctor gets called
    t2.displayTime();

    t1.setHr(7);
    t1.displayTime();
    t2.displayTime();
    return 0;
}