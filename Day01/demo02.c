#include <stdio.h>

struct Time
{
    int hr;
    int min;
};

void acceptTime(struct Time *tptr)
{
    printf("Enter hrs and mins = ");
    scanf("%d%d", &tptr->hr, &tptr->min);
}

void displayTime(struct Time *tptr)
{
    printf("Time = %d:%d", tptr->hr, tptr->min);
}

int main()
{
    struct Time t;
    acceptTime(&t);
    displayTime(&t);
    return 0;
}