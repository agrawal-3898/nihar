#include <iostream>
using namespace std;

class Time
{
private:
    // Data Members
    int hr;
    int min;

public:
    // Member Functions
    // Facilitator
    void acceptTime()
    {
        cout << "Enter hrs and mins = ";
        cin >> hr >> min;
    }

    // Facilitator
    void displayTime()
    {
        cout << "Time : " << hr << " : " << min << endl;
    }
};
int main()
{
    Time t; // Object of the class
    // t.hr;
    // t.min;
    t.acceptTime();
    t.displayTime();
    return 0;
}