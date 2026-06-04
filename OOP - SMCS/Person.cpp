#include "Person.h"
#include <string>


Person::Person()
{
    name = "";
    cnic = "";
    age = 0;
    contact = "";
}

Person::Person(std::string name, std::string cnic, int age, std::string contact)
{
    this->name = name;
    this->cnic = cnic;
    this->age = age;
    this->contact = contact;
}

Person::~Person()
{
}

std::string Person::getName() const
{
    return name;
}

std::string Person::getCNIC() const
{
    return cnic;
}

int Person::getAge() const
{
    return age;
}

std::string Person::getContact() const
{
    return contact;
}