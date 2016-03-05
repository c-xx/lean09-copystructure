#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student() {
		cout << "Student" << endl;
	}
	Student(const Student& stu) {
		cout << "Student(const Student& stu)" << endl;
	}
private:
	string m_strName;
};