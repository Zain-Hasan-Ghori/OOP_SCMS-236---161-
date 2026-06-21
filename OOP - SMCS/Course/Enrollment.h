#ifndef ENROLLMENT_H
#define ENROLLMENT_H

#include <string>

class Student;
class Course;

class Enrollment
{
private:
	Student* student;
	Course* course;

	std::string enrollmentDate;
	std::string grade;

public:
	Enrollment();
	Enrollment(Student* student,
		Course* course,
		std::string enrollmentDate,
		std::string grade);

	Student* getStudent() const;
	Course* getCourse() const;
	std::string getEnrollmentDate() const;
	std::string getGrade() const;

	void setGrade(std::string grade);
	void displayInfo() const;

	~Enrollment();
};

#endif