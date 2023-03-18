#include <iostream>
using namespace std;

class Person
{
public:
    Person(int value)
    {
        cout << "Person called " << value << endl;
    }
    Person()
    {
        cout << "Default Constructor" << endl;
    }
};

class Student : virtual public Person
{
public:
    Student(int value) : Person(value)
    {
        cout << "Student called " << value << endl;
    }
};

class Faculty : virtual public Person
{
public:
    Faculty(int value) : Person(value)
    {
        cout << "Faculty called " << value << endl;
    }
};

class TA : public Student, public Faculty
{
public:
    TA(int value) : Student(value), Faculty(value), Person(value)
    {
        cout << "TA called " << value << endl;
    }
};

int main()
{
    TA ta(100);
}