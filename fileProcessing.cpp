/*
file: sequence of bytes ending with EOF marker
stream: flow of data in sequence

the input and output operation between the executing program and files are known as disk I/O operation


after creating file object stream is associated with the file and opens communication channel between file and device

fstream header files
ifstream - file Input
ofstream - file Output

cout << variable
ofstream fileOut( fileName, mode);

cin >> variable
ifstream fileInput (fileName, mode);

*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void writeData()
{
    string enrollment, name, phone;
    int age;

    ofstream fileOut("students.txt", ios::app);

    if (!fileOut)
    {
        cerr << "file couldn't be opened" << endl;
        exit(1);
    }

    cout << "Enter Enrollment, Name, Phone No and age: \n";
    cout << "Enter end-of-file(EOF) to exit input \n";

    while (cin >> enrollment >> name >> phone >> age)
    {
        fileOut << enrollment << " " << name << " " << phone << " " << age << endl;
    }

    fileOut.close();
}

void readData()
{
    string enrollment, name, phone;
    int age;

    ifstream fileInput("students.txt", ios::in);

    if (!fileInput)
    {
        cerr << "file couldn't be opened" << endl;
        exit(1);
    }

    cout << left << setw(15) << "Enrollment No." << setw(15) << "Name" << setw(15) << "Phone No." << setw(5) << "Age" << endl;

    while (fileInput >> enrollment >> name >> phone >> age)
    {
        cout << left << setw(15) << enrollment << setw(15) << name << setw(15) << phone << setw(5) << age << endl;
    }

    fileInput.close();
}

int main()
{
    writeData();
    readData();
}