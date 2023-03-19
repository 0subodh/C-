#include <iostream>
using namespace std;

// a class having at least one pure virtual function is called abstract class
// an abstract class cannot be instantiated
// derived class will implement the incomplete functionalites in abstract class
class Base
{
    int x;

public:
    // fun() is a pure virtual function
    virtual void fun() = 0;
    int getX() { return x; }
};

class Derived : public Base
{
    int y;

public:
    void fun() { cout << "fun() called"; }
};

int main()
{
    Derived d;
    d.fun();
}