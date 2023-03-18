#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
private:
    string courseName;
    int year;

public:
    // parametrized constructors with default parameters
    GradeBook(string courseName, int year = 2005)
    {
        this->courseName = courseName;
        this->year = year;
    }
    // Destructor created explicitly
    ~GradeBook(){
        cout << this<<" Object destroyed";
    }
    void setCourseName(string courseName)
    {
        this->courseName = courseName;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    int getYear()
    {
        return year;
    }
    string getCourseName()
    {
        return courseName;
    }
};

int main()
{
    GradeBook gb1("C++", 1990);
    cout << "Object 1\n";
    cout << "Course Name: " << gb1.getCourseName() << endl;
    cout << "Year: " << gb1.getYear() << endl;

    GradeBook gb2("Data Science");
    cout << "Object 2\n";
    cout << "Course Name: " << gb2.getCourseName() << endl;
    cout << "Year: " << gb2.getYear() << endl;
}