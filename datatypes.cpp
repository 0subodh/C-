/*
Statically Typed Language: Languages where varaible types are known at compile time
Dynamically Typed Language: Languages where type is associated with run-time values, and not named variables

Data Types: Primitives, Derived and User Defined

Data Type Modifiers: to modify the length of data that a particular data type can hold, signed, unsigned, long and short
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "short int " << sizeof(short int);
    cout << "\t char " << sizeof(char);
    cout << "\t wchar_t " << sizeof(wchar_t);
    cout << "\t double " << sizeof(double);
    cout << "\t float " << sizeof(float);
    cout << "\t bool \n"
         << sizeof(bool);
}