#ifndef REPORTS_H
#define REPORTS_H

#include "..\Student.h"
#include "..\Faculty.h"
#include "..\Course.h"

class Reports {
public:
    static void showStudents(Student* students[], int count);
    static void showFaculty(Faculty* faculty[], int count);
    static void showCourses(Course* courses[], int count);
};

#endif