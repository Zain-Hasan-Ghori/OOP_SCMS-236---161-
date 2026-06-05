#ifndef GRADSTUDENT_H
#define GRADSTUDENT_H

#include "Student.h"
#include <string>

class GradStudent : public Student
{
private:
	std::string researchTopic;
	std::string supervisor;
public:
	GradStudent();
	GradStudent(std::string name, std::string cnic, int age, std::string contact,
		std::string rollNo, int semester, float gpa,
		std::string researchTopic, std::string supervisor);
	void displayInfo() const override;
	~GradStudent();
};

#endif