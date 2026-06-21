#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

class Course;   

class Student : public Person
{
protected:
    std::string rollNo;
    int semester;
    float gpa;

    Course* enrolledCourse[10];
    int courseCount;

public:
    Student();

    Student(std::string name, std::string cnic, int age, std::string contact,
        std::string rollNo, int semester, float gpa);

    void enrollCourse(Course* c);

    void displayInfo() const override;

    float calculateGPA() const;

    std::string getRollNo() const { return rollNo; }
    float getGPA() const { return gpa; }

    ~Student();
};

#endif