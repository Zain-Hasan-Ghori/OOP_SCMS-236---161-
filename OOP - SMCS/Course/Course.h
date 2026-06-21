#ifndef COURSE_H
#define COURSE_H
#include "../person/Student.h"
#include "../person/Faculty.h"
#include <iostream>
#include <string>

class Student;
class Faculty;

class Course
{
private:
    std::string courseCode;
    std::string courseName;
    int creditHours;

    Faculty* instructor;

    Student* enrolledStudents[50];
    int enrolledCount;

	Student* waitingList[50];
	int waitingCount;

    int maxCapacity;

public:
    Course();

    Course(std::string courseCode,
        std::string courseName,
        int creditHours,
        Faculty* instructor,
        int maxCapacity);

    std::string getCourseCode() const;
    std::string getCourseName() const;
    int getCreditHours() const;

    int getMaxCapacity() const;
    int getEnrolledCount() const;

    void setInstructor(Faculty* f);
    void enrollStudent(Student* s);

    Course operator+(const Course& other) const;

    bool operator==(const Course& other) const;

    friend std::ostream& operator<<(std::ostream& out, const Course& c);

    ~Course();
};

#endif