#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
protected:
	std::string name;
	std::string cnic;
	int age;
	std::string contact;
public:
	Person();
	Person(std::string name, std::string cnic, int age, std::string contact);

	virtual void displayInfo() const = 0;  //abstract
	virtual ~Person();

	std::string getName() const;
	std::string getCNIC() const;
	int getAge() const;
	std::string getContact() const;
};

#endif
