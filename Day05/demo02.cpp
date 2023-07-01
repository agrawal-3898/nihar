#include <iostream>
using namespace std;

template <class T>
class Point
{
    T x;
    T y;

public:
    Point(T x, T y)
    {
        this->x = x;
        this->y = y;
    }
    void displayPoint()
    {
        cout << "Point = " << this->x << "," << this->y << endl;
    }
};

int main()
{
    Point<int> p1(2, 4);
    p1.displayPoint();

    Point<double> p2(2.5, 4.5);
    p2.displayPoint();

    Point<char> p3('a', 'b');
    p3.displayPoint();
    return 0;
}