#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
private:
    int year;

public:
    // setter function are useful to make data validataion
    void setYear(int year)
    {
        if (year > 0)
        {
            this->year = year;
        }
    }
    int getYear()
    {
        return year;
    }
};

int main()
{
    int year;
    GradeBook gb;
    cout << "Enter the year of your birth: ";
    cin >> year;
    gb.setYear(year);
    cout << gb.getYear() << endl;
}