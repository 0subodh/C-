#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "I am vehicle of Base class" << endl;
    }
    void applyBrakes()
    {
        cout << "Apply Brakes..." << endl;
    }
    void getCapacity()
    {
        cout << "Get Capacity..." << endl;
    }
    void fuelAmount()
    {
        cout << "Fuel Amount..." << endl;
    }
};

class Bus : public Vehicle
{
public:
    Bus()
    {
        cout << "I am vehicle of Bus class" << endl;
    }
};

int main()
{
    Vehicle v1;
    v1.applyBrakes();
    v1.fuelAmount();
    v1.getCapacity();
    Bus b1;
    b1.applyBrakes();
    b1.fuelAmount();
    b1.getCapacity();
}
