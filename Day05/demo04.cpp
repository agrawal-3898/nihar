#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;

public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void displayPoint()
    {
        cout << "Point = " << this->x << "," << this->y << endl;
    }
    // int getX()
    // {
    //     return this->x;
    // }
    // int getY()
    // {
    //     return this->y;
    // }
    friend void add(Point p);
};

void add(Point p)
{
    cout << "Point addition = " << p.x + p.y << endl;
}

int main()
{
    Point p(5, 6);
    add(p);
}