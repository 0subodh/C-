/*
    only one copy of static variable is created and it is shared by all objects of same class
    default value is always 0
    it can be initialized only once
    it can be declared private, protected and public
    to access public static variable className::varName
    static members exist even when there is no objects of the class
    In case of static data members change made by one object in static data members is reflected in all other objects of the same class
*/

#include <iostream>
using namespace std;

class Student
{
public:
    Student() {}
    static int numberOfDepartments;

    static int getStudentsNumber()
    {
        return count;
    }

    static string getUniversityName()
    {
        return university;
    }
    static void setCount(int c)
    {
        count = c;
    }

private:
    static int count;

protected:
    static string university;
};

int Student::numberOfDepartments = 1000;
int Student::count = 5000;
string Student::university = "IOE";

int main()
{
    Student st1, st2;

    cout << "No of departments : " << Student::numberOfDepartments;
    cout << "\nNo of students : " << Student::getStudentsNumber();
    cout << "\nName of University : " << Student::getUniversityName() << endl;
    st1.setCount(7000);
    cout << "Student1 " << st1.getStudentsNumber() << endl;
}