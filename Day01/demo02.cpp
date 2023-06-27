#include <iostream>

struct Time
{
private:
    int hr;
    int min;

public:
    void acceptTime()
    {
        printf("Enter hrs and mins = ");
        scanf("%d%d", &hr, &min);
    }

    void displayTime()
    {
        printf("Time = %d:%d", hr, min);
    }
};

int main()
{
    printf("In cpp code\n");
    struct Time t;
    // t.hr = 10;  // NOT OK
    // t.min = 20; // NOT OK
    t.acceptTime();
    t.displayTime();
    return 0;
}