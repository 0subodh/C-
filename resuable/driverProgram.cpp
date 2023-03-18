#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
    GradeBook gb1("C++");
    GradeBook gb2("Cyber Security");
    cout << "GradeBook 1 created for course " << gb1.getCourseName() << endl;
    cout << "GradeBook 2 created for course " << gb2.getCourseName() << endl;
}