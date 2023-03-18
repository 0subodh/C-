#include <iostream>
using namespace std;

class Parent1
{
public:
    Parent1()
    {
        cout << "Base class 1 constructor" << endl;
    }
    ~Parent1()
    {
        cout << "Base class 1 destructor" << endl;
    }
};

class Parent2
{
public:
    Parent2()
    {
        cout << "Base class 2 constructor" << endl;
    }
    ~Parent2()
    {
        cout << "Base class 2 destructor" << endl;
    }
};

class Child : public Parent1, public Parent2
{
public:
    Child()
    {
        cout << "Derived class constructor" << endl;
    }
    ~Child()
    {
        cout << "Derived class destructor" << endl;
    }
};

int main()
{
    Child c;
}