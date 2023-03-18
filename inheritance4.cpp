#include <iostream>
using namespace std;

class Parent
{
public:
    Parent(int x)
    {
        this->x = x;
        cout << "Base Class" << endl;
    }
    int getX()
    {
        return x;
    }
    void displayX()
    {
        cout << "Varaible in Base Class " << x << endl;
    }

private:
    int x;
};

class Child : public Parent
{
public:
    Child(int x) : Parent(x)
    {
        cout << "Derived Class" << endl;
    }
    // function Overriding: same signature
    void displayX()
    {
        cout << "Varaible in Child Class " << getX() << endl;
    }
};

int main()
{
    Parent p(20);
    p.displayX();
    Child c(10);
    c.displayX();
}