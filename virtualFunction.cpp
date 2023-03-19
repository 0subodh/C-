#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Shape of Base class" << endl;
    }
};

class Triangle : public Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Triangle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Rectangle" << endl;
    }
};

class Square : public Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Square" << endl;
    }
};

class Circle : public Shape
{
public:
    virtual void draw()
    {
        cout << "Drawig Circle" << endl;
    }
};

int main()
{
    Shape *sp1 = new Triangle;
    Shape *sp2 = new Circle;
    Shape *sp3 = new Rectangle;
    Shape *sp4 = new Square;
    Shape *sp5 = new Shape;

    /*
    Triangle t; // derived class object
    t.draw();

    Shape s; // base class object
    s.draw();

    Triangle *tptr; // derived class pointer
    tptr->draw();

    Shape *sptr; // base class pointer
    sptr->draw();

    sptr = &s; // aim base class pointer at base class object
    sptr->draw();

    tptr = &t; // aim derived class pointer at derived class object
    tptr->draw();

    sptr = &t; // base class pointer pointing  to derived object
    sptr->draw();

    // derived class pointer cannot point to base class object

    */

    sp1->draw();
    sp2->draw();
    sp3->draw();
    sp4->draw();
    sp5->draw();
}