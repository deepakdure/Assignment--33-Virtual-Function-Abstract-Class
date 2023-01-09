#include <iostream>
using namespace std;
class Shape
{
protected:
    double x, y;

public:
    void get_data(double x, double y = 0)
    {
        this->x = x;
        this->y = y;
    }
    virtual void display_area() = 0;
};
class Square : public Shape
{
public:
    void display_area()
    {
        cout << "Area of the Square is :- " << x * x << endl
             << endl;
    }
};
class Paeallelogram : public Shape
{
public:
    void display_area()
    {
        cout << "Area of the Parallelogram is :- " << x * y << endl
             << endl;
    }
};
int main()
{
    cout << "-------------------------------------------\n\n";
    double x, y;
    Square s;
    cout << "Enter side of the Square :- \n";
    cin >> x;
    s.get_data(x);
    s.display_area();

    Paeallelogram p;
    cout << "Enter base and height of the Parallelogram :- \n";
    cin >> x >> y;
    p.get_data(x, y);
    p.display_area();
    cout << "-------------------------------------------\n\n";
    return 0;
}