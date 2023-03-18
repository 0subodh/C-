#include <iostream>
#include <string>
using namespace std;

// GradeBook class defination
class GradeBook
{
    // all data members are private by default
    // when data members(or methods) are declared below private access specifier it is called data hiding
private:
    string courseName;

public:
    void setCourseName(string course)
    {
        courseName = course;
    }

    string getCourseName()
    {
        return courseName;
    }

    void displayMessage()
    {
        cout << "Welcome to Gradebook " << courseName << endl;
    }
};

int main()
{
    GradeBook gb;
    gb.setCourseName("Computer Science");
    gb.displayMessage();
}
