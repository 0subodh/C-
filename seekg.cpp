#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file("students.txt", ios::in | ios::out);
    cout << "tellg pointer " << file.tellg() << endl;
    cout << "tellp pointer " << file.tellp() << endl;

    file.seekg(11, ios::beg);
    cout << "tellg pointer " << file.tellg() << endl;
    cout << "tellp pointer " << file.tellp() << endl;

    char A[10];
    file.read(A, 11);
    A[9] = 0;
    cout << "Content : " << A << endl;
    file.close();
}