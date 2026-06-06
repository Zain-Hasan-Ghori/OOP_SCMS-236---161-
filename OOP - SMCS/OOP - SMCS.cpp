#include <iostream>

#include "Student.h"
#include "Faculty.h"
#include "Staff.h"
#include "GradStudent.h"
#include "Course.h"
#include "Enrollment.h"
#include "Library.h"
#include "Book.h"
#include "Journal.h"
#include "Exception.h"

using namespace std;

int main()
{
    cout << "===== PERSON HIERARCHY TEST =====\n" << endl;

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

    cout << "\n===== COURSE TEST =====\n" << endl;

    Course c1(
        "CS104",
        "Object Oriented Programming",
        3,
        &f,
        30
    );

    cout << c1 << endl;

    Course c2(
        "CS104",
        "OOP",
        3,
        &f,
        40
    );

    if (c1 == c2)
        cout << "Courses are equal.\n";
    else
        cout << "Courses are not equal.\n";

    cout << "\n===== ENROLLMENT TEST =====\n" << endl;

    Enrollment e1(
        &s,
        &c1,
        "2026-06-05",
        "A"
    );

    e1.displayInfo();

    cout << "\n===== LIBRARY TEST =====\n" << endl;

    Library lib;

    Book* b1 = new Book(
        1,
        "OOP",
        "Ali",
        2020,
        "123",
        "Computer Science",
        5
    );

    Journal* j1 = new Journal(
        2,
        "AI Research",
        "Dr X",
        2023,
        "456",
        2,
        1
    );

    lib.addItem(b1);
    lib.addItem(j1);

    cout << "\nDisplaying Library Items:\n" << endl;
    lib.displayAll();

    cout << "\nSearching for OOP:\n" << endl;
    lib.searchByTitle("OOP");

    return 0;
   

}
