#ifndef STAFF_H
#define STAFF_H

#include "Person.h"
#include <string>

class Staff : public Person
{
private:
	std::string employeeID;
	std::string department;
	std::string shift;
	std::string position;

public:
	Staff();
	Staff(std::string name, std::string cnic, int age, std::string contact,
		std::string employeeID, std::string department, std::string position, std::string shift);
	void displayInfo() const override;
	~Staff();
};

#endif