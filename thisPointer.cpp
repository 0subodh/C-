#include <iostream>
using namespace std;

class Test
{
public:
    Test(int value = 0)
    {
        this->value = value;
    }
    void print()
    {
        cout << "value: " << value;
        cout << "value: " << this->value;
        cout << "value: " << (*this).value;
    }

private:
    int value;
};

int main()
{
    Test t1(35);
    t1.print();
}