#include <iostream>
using namespace std;
class Volume
{
protected:
    double a;

public:
    void get_data(double a)
    {
        this->a = a;
    }
    virtual void display_volume() = 0;
};
class Cube : public Volume
{
public:
    void display_volume()
    {
        cout << "Volume of the Cube is :- " << a * a * a << endl
             << endl;
    }
};
class Sphere : public Volume
{
public:
    void display_volume()
    {
        cout << "Volume of the Sphere is :- " << ((1.33333333) * (3.1428571428571) * a * a * a) << endl
             << endl;
    }
};
int main()
{
    double x;
    Cube c;
    cout << "Enter Side of the Cube :- ";
    cin >> x;
    c.get_data(x);
    c.display_volume();

    Sphere s;
    cout << "Enter Radius of the Sphere :- ";
    cin >> x;
    s.get_data(x);
    s.display_volume();
    return 0;
}
