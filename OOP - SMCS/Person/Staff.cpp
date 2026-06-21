#include "Staff.h"
#include <iostream>
using namespace std;

Staff::Staff() : Person() {
	employeeID = "";
	department = "";
	position = "";
	shift = "";
}

Staff::Staff(string name, string cnic, int age, string contact,
	string employeeID, string department, string position, string shift)
	: Person(name, cnic, age, contact)
{
	this->employeeID = employeeID;
	this->department = department;
	this->position = position;
	this->shift = shift;
}

void Staff::displayInfo() const {
	cout << "==============================" << endl;
	cout << " STAFF INFO" << endl;
	cout << "==============================" << endl;
	cout << "Name:        " << name << endl;
	cout << "CNIC:        " << cnic << endl;
	cout << "Age:         " << age << endl;
	cout << "Contact:     " << contact << endl;
	cout << "Employee ID: " << employeeID << endl;
	cout << "Department:  " << department << endl;
	cout << "Position:    " << position << endl;
	cout << "Shift:       " << shift << endl;
}

Staff::~Staff() {
}