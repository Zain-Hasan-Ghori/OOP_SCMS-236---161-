#ifndef UTILS_H
#define UTILS_H
#include "../person/Student.h"
#include <string>

class Utils {
public:
	static void sortStudentByGPA(Student* arr[], int count);
	static Student* findStudentByRoll(Student* arr[], int count, std::string roll);
};
#endif