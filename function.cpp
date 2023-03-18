#include <iostream>
#include <string>
using namespace std;

// GradeBook class defination

class GradeBook
{
public:
	void displayMessage(string courseName)
	{
		cout << "Welcome to Gradebook " << courseName << endl;
	}
};

int main()
{
	GradeBook gb;
	string courseName;
	cout << "Enter course name: ";
	getline(cin,courseName);

	gb.displayMessage(courseName);
}
