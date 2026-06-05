#include <iostream>

#include "Student.h"
#include "Faculty.h"
#include "Staff.h"
#include "GradStudent.h"

using namespace std;

int main()
{
    Student s(
        "Ali",
        "12345-1234567-1",
        20,
        "03001234567",
        "FA21-BCS-001",
        5,
        3.45f
    );

    Faculty f(
        "Dr Ahmed",
        "11111-1111111-1",
        45,
        "03111234567",
        "F101",
        "Computer Science",
        "Professor"
    );

    Staff st(
        "Usman",
        "22222-2222222-2",
        35,
        "03211234567",
        "S201",
        "Administration",
        "Clerk",
        "Morning"
    );

    GradStudent gs(
        "Sara",
        "33333-3333333-3",
        24,
        "03331234567",
        "MS001",
        2,
        3.90f,
        "Artificial Intelligence",
        "Dr Ahmed"
    );

    Person* people[4];

    people[0] = &s;
    people[1] = &f;
    people[2] = &st;
    people[3] = &gs;

    for (int i = 0; i < 4; i++)
    {
        people[i]->displayInfo();
        cout << endl;
    }

    return 0;
}
