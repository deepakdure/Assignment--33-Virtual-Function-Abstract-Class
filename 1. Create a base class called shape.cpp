#include <iostream>
using namespace std;
class Shape
{
protected:
    double x, y;

public:
    void SetData(double l, double m)
    {
        x = l;
        y = m;
    }
    virtual void display_area() = 0;
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
    Triangle T;
    Rectangle R;
    R.SetData(4, 8);
    T.SetData(2, 6);
    T.display_area();
    R.display_area();
    return 0;
}