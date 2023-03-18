/*

*/
#include <iostream>
using namespace std;

class A
{
public:
    A(int x = 10, int y = 20, int z = 30)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    int x;

protected:
    int y;

private:
    int z;
};

class B : public A
{
    // x-pulic, y-protected, z-hidden
public:
    void display()
    {
        cout << " x = " << x << endl;
        cout << " y = " << y << endl;
    }
};

class C : protected A
{
    // x-protected, y-protected, z-hidden
public:
    void display()
    {
        cout << " x = " << x << endl;
        cout << " y = " << y << endl;
    }
};

class D : private A
{
    // x-private, y-private, z-hidden
public:
    void display()
    {
        cout << " x = " << x << endl;
        cout << " y = " << y << endl;
    }
};

int main()
{
    B b;
    C c;
    D d;
    b.display();
    c.display();
    d.display();
}