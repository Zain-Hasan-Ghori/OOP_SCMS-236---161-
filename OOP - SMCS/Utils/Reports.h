#ifndef REPORTS_H
#define REPORTS_H

#include "../person/Student.h"
#include "../person/Faculty.h"
#include "../course/Course.h"
#include "../library/Library.h"
#include "../finance/FeeRecord.h"
#include "../finance/Invoice.h"

class Reports {
public:
    static void showStudents(Student* students[], int count);
    static void showFaculty(Faculty* faculty[], int count);
    static void showCourses(Course* courses[], int count);
};

#endif