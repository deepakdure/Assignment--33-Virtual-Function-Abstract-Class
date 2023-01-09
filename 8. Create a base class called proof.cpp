#include <iostream>
#include <math.h>
using namespace std;
class Proof
{
protected:
    int x, y, z;
};
class Compute : public Proof
{
public:
    Compute(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void RirgtAngle_or_Not()
    {
        if ((z * z) == (x * x) + (y * y) || (y * y) + (z * z) == (x * x) || (x * x) + (z * z) == (y * y))
        {
            cout << "Right Angle Triangle\n\n";
        }
        else
            cout << "Not Right Angle Triangle\n\n";
    }
};
int main()
{
    int a, b, c;
    cout << "Enter three angles :- \n";
    cin >> a >> b >> c;
    Compute C(a, b, c);
    C.RirgtAngle_or_Not();
}