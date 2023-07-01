#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void acceptData() = 0;
    virtual void calculateArea() = 0;
};

class Rectangle : public Shape
{
private:
    int length;
    int breadth;

public:
    void acceptData()
    {
        cout << "Enter length and breadth = ";
        cin >> this->length >> this->breadth;
    }
    void calculateArea()
    {
        cout << "Area of Rectangle = " << this->length * this->breadth << endl;
    }
};

class Circle : public Shape
{
private:
    int radius;

public:
    void acceptData()
    {
        cout << "Enter radius = ";
        cin >> this->radius;
    }
    void calculateArea()
    {
        cout << "Area of Circle = " << this->radius * this->radius * 3.14 << endl;
    }
};

int menu()
{
    int choice;
    cout << "0. Exit" << endl;
    cout << "1. Area of Rectangle" << endl;
    cout << "2. Area of Circle" << endl;
    cout << "Enter your choice = ";
    cin >> choice;
    return choice;
}

int main()
{
    Shape *shape;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            shape = new Rectangle();
            break;
        case 2:
            shape = new Circle();
            break;
        default:
            shape = NULL;
            cout << "Wrong choice :( " << endl;
            break;
        }
        if (shape != NULL)
        {
            shape->acceptData();
            shape->calculateArea();
            delete shape;
            shape = NULL;
        }
    }
    return 0;
}