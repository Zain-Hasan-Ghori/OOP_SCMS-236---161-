#include "Faculty.h"
#include <iostream>
using namespace std;

Faculty::Faculty() : Person() {
	employeeID = "";
	department = "";
	designation = "";
	courseCount = 0;
	for (int i = 0; i < 10; i++)
		assignedCourses[i] = nullptr;
	}
	Faculty::Faculty(string name, string cnic, int age, string contact,
		string employeeID, string department, string designation)
		: Person(name, cnic, age, contact)
	{
		this->employeeID = employeeID;
		this->department = department;
		this->designation = designation;
		this->courseCount = 0;

		for (int i = 0; i < 10; i++) 
			assignedCourses[i] = nullptr;
		}

	void Faculty::assignCourse(Course* c) {
		if (courseCount < 10) {
			assignedCourses[courseCount++] = c;
		}
		else {
			cout << "Cannot assign more courses to this faculty." << endl;
		}
	}

			void Faculty::displayInfo() const {
				cout << "==============================" << endl;
				cout << " FACULTY INFO" << endl;
				cout << "==============================" << endl;

				cout << "Name:        " << name << endl;
				cout << "CNIC:        " << cnic << endl;
				cout << "Age:         " << age << endl;
				cout << "Contact:     " << contact << endl;
				cout << "Employee ID: " << employeeID << endl;
				cout << "Department:  " << department << endl;
				cout << "Designation: " << designation << endl;
				cout << "Courses:     " << courseCount << endl;

			}

			Faculty::~Faculty() {
			}
		