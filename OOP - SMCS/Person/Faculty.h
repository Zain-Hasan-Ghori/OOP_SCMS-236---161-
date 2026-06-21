#ifndef FACULTY_H
#define FACULTY_H

#include "Person.h"
#include <string>

class Course;

class Faculty : public Person
{
private:
	std::string employeeID;
	std::string department;
	std::string designation;

	Course* assignedCourses[10];
	int courseCount;

public:
	Faculty();
	Faculty(std::string name, std::string cnic, int age, std::string contact,
		std::string employeeID, std::string department, std::string designation);

	void assignCourse(Course* c);
	void displayInfo() const override;
	~Faculty();
};

#endif