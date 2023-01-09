#include <iostream>
using namespace std;
class Shape
{
protected:
    double x, y;

public:
    void get_data(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    virtual void display_area() = 0;

public:
};
class Triangle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of Triangle is :- " << x * y / 2 << endl;
    }
};
class Rectangle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of Rectangle is :- " << x * y << endl;
    }
};
int main()
{
    Triangle t;
    Rectangle r;
    t.get_data(4, 8.9);
    t.display_area();

    r.get_data(3.3, 5);
    r.display_area();
}