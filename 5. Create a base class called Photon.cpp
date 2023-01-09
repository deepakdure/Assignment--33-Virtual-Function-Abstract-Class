#include <iostream>
#include <math.h>
using namespace std;
class Photon
{
protected:
    double wavelength;

public:
    Photon(double wavelength)
    {
        this->wavelength = wavelength / pow(10, -10);
    }
};
class Calculate_Photon_Energy : public Photon
{
    double E;

public:
    Calculate_Photon_Energy(double value_in_angstrom) : Photon(value_in_angstrom)
    {
    }
    void calculatePhotonEnergy()
    {
        E = (6.626 * (pow(10, -34)) * 3 * (pow(10, 8))) / wavelength;
        cout << "value of Photon Energy is :- " << E << endl;
    }
};
int main()
{
    Calculate_Photon_Energy cpe(0.5);
    cpe.calculatePhotonEnergy();

    cout << endl;
    Calculate_Photon_Energy cpe2(1);
    cpe2.calculatePhotonEnergy();

    cout << endl;
    Calculate_Photon_Energy cpe3(5);
    cpe3.calculatePhotonEnergy();
}
