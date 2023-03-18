#include <iostream>
using namespace std;

class Complex
{
public:
    Complex(int real = 0, int img = 0)
    {
        this->real = real;
        this->img = img;
    }

    Complex addObjects(Complex c2)
    {
        Complex temp;
        temp.real = real + c2.real;
        temp.img = img + c2.img;
        return temp;
    }

    int getReal()
    {
        return real;
    }

    int getImg()
    {
        return img;
    }

private:
    int real, img;
};

int main()
{
    Complex c1(4, 5);
    Complex c2(3, 5);
    Complex sum = c1.addObjects(c2);
    cout << "C1 Object: " << c1.getReal() << " + " << c1.getImg() << 'i' << endl;
    cout << "C2 Object: " << c2.getReal() << " + " << c2.getImg() << 'i' << endl;
    cout << "Final Object: " << sum.getReal() << " + " << sum.getImg() << 'i' << endl;
}