#include "Utils.h"
#include <string>

void Utils::sortStudentByGPA(Student* arr[], int count) {
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - i - 1; j++)
		{
			if (arr[j]->getGPA() < arr[j + 1]->getGPA())
			{
				Student* temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp; 
			}
		}
	}
}
Student* Utils::findStudentByRoll(Student* arr[], int count, std::string roll) {
	for (int i = 0; i < count; i++) {
		if (arr[i]->getRollNo() == roll) {
			return arr[i];
		}
	 }
	return nullptr;
}