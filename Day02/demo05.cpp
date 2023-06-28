#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;

public:
    // void acceptTime(struct Time *tptr)
    void acceptTime() // acceptTime(Time * const this)
    {
        cout << "Enter hrs and mins = ";
        cin >> this->hr >> min;
    }

    void displayTime()
    {
        cout << "Time - " << hr << " : " << this->min << endl;
    }
};
int main()
{
    Time t1;
    Time t2;
    t1.acceptTime();
    t2.acceptTime();

    t2.displayTime();
    t1.displayTime();

    return 0;
}