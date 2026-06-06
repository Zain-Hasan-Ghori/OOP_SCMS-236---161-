#include "Enrollment.h"
#include "Student.h"
#include "Course.h"

#include<iostream>
using namespace std;

Enrollment::Enrollment() {
	student = nullptr;
	course = nullptr;
	enrollmentDate = "";
	grade = "";
}

Enrollment::Enrollment(Student* student, Course* course, string enrollmentDate, string grade)
{
	this->student = student;
	this->course = course;
	this->enrollmentDate = enrollmentDate;
	this->grade = grade;
}

Student* Enrollment::getStudent() const {
	return student;
}

Course* Enrollment::getCourse() const {
	return course;
}

string Enrollment::getEnrollmentDate() const {
	return enrollmentDate;
}

string Enrollment::getGrade() const {
	return grade;
}

void Enrollment::setGrade(string grade) {
	this->grade = grade;
}

void Enrollment::displayInfo() const {
	cout<< "===== ENROLLMENT INFO =====" << endl;

	if(student != nullptr)
		cout << "Student: " << student->getName() << endl;

	if (course != nullptr)
		cout << "Course: " << course->getCourseName() << endl;

	cout << "Enrollment Date: " << enrollmentDate << endl;
	cout << "Grade: " << grade << endl;
}

Enrollment::~Enrollment() {
}