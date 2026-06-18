#include "Reports.h"
#include <iostream>

using namespace std;

void Reports::showStudents(Student* students[], int count)
{
    cout << "\n===== STUDENT REPORT =====\n";
    for (int i = 0; i < count; i++)
    {
        students[i]->displayInfo();
        cout << "------------------\n";
    }
}

void Reports::showFaculty(Faculty* faculty[], int count)
{
    cout << "\n===== FACULTY REPORT =====\n";
    for (int i = 0; i < count; i++)
    {
        faculty[i]->displayInfo();
        cout << "------------------\n";
    }
}

void Reports::showCourses(Course* courses[], int count)
{
    cout << "\n===== COURSE REPORT =====\n";
    for (int i = 0; i < count; i++)
    {
        cout << *courses[i];
    }
}