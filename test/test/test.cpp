#include <iostream>
#include <stdlib.h>
#include <string>
#include "Student.h"
using namespace std;


void test(Student t) {

}

int main(void) {

	Student stu1;
	Student stu2 = stu1;
	Student stu3(stu1);

	test(stu1);

	system("pause");
	return 0;
}