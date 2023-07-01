#include <iostream>
using namespace std;

template <class P, class Q>
class Point
{
    P x;
    Q y;

public:
    Point(P x, Q y)
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
    Point<int, int> p1(2, 4);
    p1.displayPoint();

    Point<int, double> p2(2, 4.5);
    p2.displayPoint();

    Point<double, char> p3(2.5, 'b');
    p3.displayPoint();
    return 0;
}