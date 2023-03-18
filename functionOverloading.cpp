#include <iostream>
using namespace std;

class TwoDShape
{
public:
    int area(int a)
    {
        return a * a;
    }

    int area(int a, int b)
    {
        return a * b;
    }

private:
    int a, b;
};

int main()
{
    TwoDShape tds1;
    TwoDShape tds2;
    cout << "Area of tds1 " << tds1.area(10);
    cout << "\tArea of tds2 " << tds2.area(10,20);
}