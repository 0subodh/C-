/*

operator overloading can be done by either non-static member functions or non-member functions

Rules for operator overloading
* you can't change precedence and associativity of any operators
* you can't change arity of operators(Unary or Binary)
* you cannot create new operators
* you cannot change the meaning of how operators work
* (),[] and -> operators can be overloaded only by creating class member functions

*/

// overloading binary operator
#include <iostream>
using namespace std;

class Complex
{
public:
    friend Complex operator-(Complex const &obj1, Complex const &obj2);

    Complex(int real = 0, int img = 0)
    {
        this->real = real;
        this->img = img;
    }

    void display()
    {
        cout << real << " + " << img << "i\n";
    }

    // operatoar overloading using non-static member functions
    Complex operator+(Complex const &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }

private:
    int real, img;
};

// operator overloading using non-member friend function
Complex operator-(Complex const &obj1, Complex const &obj2)
{
    Complex temp;
    temp.real = obj1.real - obj2.real;
    temp.img = obj1.img - obj2.img;
    return temp;
}

int main()
{
    Complex c1(10, 15), c2(5, 7);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    c1.display();
    c2.display();
    c3.display();
    c4.display();
}