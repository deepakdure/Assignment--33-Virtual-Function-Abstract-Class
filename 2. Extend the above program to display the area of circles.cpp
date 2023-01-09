#include <iostream>
#define PI 3.14
using namespace std;
class Shape
{
protected:
    double x, y;

public:
    void SetData(double x, double y = 0)
    {
        this->x = x;
        this->y = y;
    }
    virtual void display() = 0;
};
class Triangle : public Shape
{
public:
    void display()
    {
        cout << "Area of Triangle is :- " << x * y / 2 << endl;
    }
};
class Rectangle : public Shape
{
public:
    void display()
    {
        cout << "Area of Rectangle is :- " << x * y << endl;
    }
};
class Circle : public Shape
{
public:
    void display()
    {
        cout << "Area of Circle is :- " << PI * x * x << endl;
    }
};
int main()
{
    Triangle t;
    Rectangle r;
    Circle c;

    t.SetData(3, 8);
    r.SetData(6, 7);
    c.SetData(6);

    t.display();
    r.display();
    c.display();
    cout << endl;
}