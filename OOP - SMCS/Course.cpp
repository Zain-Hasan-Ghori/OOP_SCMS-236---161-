#include "Course.h"
#include "Exception.h"
using namespace std;

Course::Course() {
	courseCode = "";
	courseName = "";
	creditHours = 0;
	instructor = nullptr;
	enrolledCount = 0; 
	waitingCount = 0;
	maxCapacity = 0;
	for (int i = 0; i < 50; i++) {
		enrolledStudents[i] = nullptr;
			waitingList[i] = nullptr;
	}
}

Course::Course(string courseCode, string courseName, int creditHours, Faculty* instructor, int maxCapacity) {
	this->courseCode = courseCode;
	this->courseName = courseName;
	this->creditHours = creditHours;
	this->instructor = instructor;
	this->maxCapacity = maxCapacity;

	this->enrolledCount = 0;
	this->waitingCount = 0;   

	for (int i = 0; i < 50; i++) {
		enrolledStudents[i] = nullptr;
		waitingList[i] = nullptr;   
	}
}

string Course::getCourseCode() const {
	return courseCode;
}
string Course::getCourseName() const {
	return courseName;
}
int Course::getCreditHours() const {
	return creditHours;
}
int Course::getMaxCapacity() const {
	return maxCapacity;
}
int Course::getEnrolledCount() const {
	return enrolledCount;
}
void Course::setInstructor(Faculty* f)
{
	instructor = f;
}

void Course::enrollStudent(Student* s)
{
	if (enrolledCount < maxCapacity)
	{
		enrolledStudents[enrolledCount++] = s;
	}
	else
	{
		if (waitingCount < 50)
			waitingList[waitingCount++] = s;
	}
}

bool Course::operator==(const Course& other) const
{
	return this->courseCode == other.courseCode;
}

ostream& operator<<(ostream& out, const Course& c)
{
	out << "============================\n";
	out << "Course Code: " << c.courseCode << endl;
	out << "Course Name: " << c.courseName << endl;
	out << "Credit Hours: " << c.creditHours << endl;
	out << "Enrolled: " << c.enrolledCount << "/" << c.maxCapacity << endl;

	if (c.instructor)
		out << "Instructor: " << c.instructor->getName() << endl;

	out << "\nWaiting List: " << c.waitingCount << endl;

	for (int i = 0; i < c.waitingCount; i++)
	{
		if (c.waitingList[i])
			out << "  - " << c.waitingList[i]->getName() << endl;
	}

	out << "============================\n";

	return out;
}

Course Course::operator+(const Course& other) const
{
	Course result;

	result.courseCode = this->courseCode + "+" + other.courseCode;
	result.courseName = this->courseName;
	result.creditHours = this->creditHours;
	result.instructor = this->instructor;
	result.maxCapacity = 50;

	result.enrolledCount = 0;
	result.waitingCount = 0;

	for (int i = 0; i < this->waitingCount; i++)
	{
		result.waitingList[result.waitingCount++] = this->waitingList[i];
	}

	for (int i = 0; i < other.waitingCount; i++)
	{
		if (result.waitingCount < 50)
			result.waitingList[result.waitingCount++] = other.waitingList[i];
	}

	return result;
}

Course::~Course()
{
}