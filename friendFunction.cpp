/*
function defined outside class but able to access non-public data members of the class is called friend function
it violates information hiding but if used properly enhances performance
properties of friend functions
1. friendship is granted not taken
2. friendship in neither symmetric nor transitive
*/
#include <iostream>
using namespace std;

class Count
{
public:
    // friend function declared inside class
    friend void setX(Count &, int);

    // friend class declared inside class
    friend class ChangeX;

    Count(int x = 5)
    {
        this->x = x;
    }
    void display()
    {
        cout << "x = " << x << endl;
    }

private:
    int x;
};

// friend function defined outside class
void setX(Count &o, int a)
{
    o.x = a;
}

class ChangeX
{
public:
    void setX(Count &o, int val)
    {
        o.x = val;
    }
};

int main()
{
    ChangeX changeX;
    Count counter;
    counter.display();
    setX(counter, 9);
    counter.display();
    changeX.setX(counter, 100);
    counter.display();
}