#include <iostream>
using namespace std;
class Matrix
{
protected:
    int a, b, c, d;
};
class Calculate_determinant : public Matrix
{
public:
    Calculate_determinant(int a, int b, int c, int d)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }
    int calculateDetreminant()
    {
        return (a * this->d) - (this->b * c);
    }
};
int main()
{
    int a, b, c, d;
    cout << "Enter 4 Numbers :- " << endl;
    cin >> a >> b >> c >> d;
    Calculate_determinant C1(a, b, c, d);
    cout << "Determinant is :- " << C1.calculateDetreminant() << endl;
}