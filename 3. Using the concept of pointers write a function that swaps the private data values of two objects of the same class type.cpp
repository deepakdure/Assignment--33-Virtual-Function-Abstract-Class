#include <iostream>
using namespace std;
class Data
{
private:
    int x;

public:
    Data(int x)
    {
        this->x = x;
    }
    void ShowData()
    {
        cout << x << endl;
    }
    void swap(Data *x2)
    {
        int x3;
        x3 = x;
        x = x2->x;
        x2->x = x3;
    }
};
int main()
{
    Data d1(5);
    Data d2(10);
    cout << "Before Swapping Data is :- " << endl
         << "Object 1 Data :- ";
    d1.ShowData();
    cout << "Object 2 Data :- ";
    d2.ShowData();

    cout << endl
         << "After Swapping Data is :- " << endl
         << "Object 1 Data :- ";
    d1.swap(&d2);
    d1.ShowData();
    cout << "Object 2 Data :- ";
    d2.ShowData();
}