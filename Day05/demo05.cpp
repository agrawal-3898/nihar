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
    friend Point operator+(Point p1, Point p2);
};

Point operator+(Point p1, Point p2)
{
    int x = p1.x + p2.x;
    int y = p1.y + p2.y;
    Point result(x, y);
    return result;
}

int main()
{
    Point p1(2, 4);
    p1.displayPoint();
    Point p2(3, 5);
    p2.displayPoint();

    Point p3 = p1 + p2;
    p3.displayPoint();
    return 0;
}