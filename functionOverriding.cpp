#include <iostream>
using namespace std;

class Parent
{
public:
    void displayMessage()
    {
        cout << "Hello I am Base Class" << endl;
    }
};

class Child : public Parent
{
public:
    // displayMessage() function overrides parent function
    void displayMessage()
    {
        cout << "Hello I am Child Class" << endl;
    }
};

int main()
{
    Parent p;
    p.displayMessage();
    Child c;
    c.displayMessage();
}