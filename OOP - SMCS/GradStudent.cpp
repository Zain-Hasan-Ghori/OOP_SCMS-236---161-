#include "GradStudent.h"
#include <iostream>

using namespace std;

GradStudent::GradStudent() : Student()
{
    researchTopic = "";
    supervisor = "";
}

GradStudent::GradStudent(string name,
    string cnic,
    int age,
    string contact,
    string rollNo,
    int semester,
    float gpa,
    string researchTopic,
    string supervisor)
    : Student(name, cnic, age, contact,
        rollNo, semester, gpa)
{
    this->researchTopic = researchTopic;
    this->supervisor = supervisor;
}

void GradStudent::displayInfo() const
{
    cout << "==============================" << endl;
    cout << " GRAD STUDENT INFO" << endl;
    cout << "==============================" << endl;

    cout << "Name:           " << name << endl;
    cout << "CNIC:           " << cnic << endl;
    cout << "Age:            " << age << endl;
    cout << "Contact:        " << contact << endl;
    cout << "Roll No:        " << rollNo << endl;
    cout << "Semester:       " << semester << endl;
    cout << "GPA:            " << gpa << endl;
    cout << "Research Topic: " <<  researchTopic << endl;
    cout << "Supervisor:     " << supervisor << endl;
}

GradStudent::~GradStudent()
{
}