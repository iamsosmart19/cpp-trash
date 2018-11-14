#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student
{
	public:
		int semesterHours;
		double gpa;
		double addCourse(int hours, double grade);
};

int main(int argc, char *argv[])
{
	Student s;
	s.gpa = 3.0;

	Student* pS;

	pS = &s;

	//accessing variable of pointer class is (*pS).gpa
	cout << "s.gpa   = " << s.gpa << "\n" << "pS->gpa = " << pS->gpa << endl;

	cout << "Press Enter to continue...";
	cin.get();
	return 0;
}
