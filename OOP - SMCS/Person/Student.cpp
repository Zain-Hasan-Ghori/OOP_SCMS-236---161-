#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

Student::Student() : Person() {
	rollNo = "";
	semester = 0;
	gpa = 0.0;
	courseCount = 0;
	for (int i = 0; i < 10; i++) {
		enrolledCourse[i] = nullptr;
	}
}

Student::Student(string name, string cnic, int age, string contact, string rollNo, int semester, float gpa) : Person(name, cnic, age, contact) {
	this->rollNo = rollNo;
	this->semester = semester;
	this->gpa = gpa;
	this->courseCount = 0;
	for (int i = 0; i < 10; i++) {
		enrolledCourse[i] = nullptr;
	}
}

void Student::displayInfo() const{
	cout << "==============================" << endl;
	cout << " STUDENT INFO" << endl;
	cout << "==============================" << endl;
	cout << "Name:		" << name << endl;
	cout << "CNIC:		" << cnic << endl;
	cout << "Age:		" << age << endl;
	cout << "Contact:   " << contact << endl;
	cout << "Roll No:	" << rollNo << endl;
	cout << "Semester:	" << semester << endl;
	cout << "GPA:		" << gpa << endl;
	cout << "Courses:	" << courseCount << endl;
}

void Student::enrollCourse(Course* c) {
	if (courseCount < 10) {
		enrolledCourse[courseCount++] = c;
	}
}

float Student::calculateGPA() const
{
	return gpa;
}

Student::~Student() {
}