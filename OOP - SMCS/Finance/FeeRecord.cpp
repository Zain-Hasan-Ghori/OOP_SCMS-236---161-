#include "FeeRecord.h"
#include "Invoice.h"
#include <iostream>
#include <fstream>   
using namespace std;

FeeRecord::FeeRecord()
{
    studentRef = "";
    semesterFee = 0;
    hostelFee = 0;
    libraryFine = 0;
    totalPaid = 0;
    balance = 0;
}

FeeRecord::FeeRecord(string studentRef, double semesterFee, double hostelFee, double libraryFine)
{
    this->studentRef = studentRef;
    this->semesterFee = semesterFee;
    this->hostelFee = hostelFee;
    this->libraryFine = libraryFine;

    totalPaid = 0;
    balance = semesterFee + hostelFee + libraryFine;
}

FeeRecord::FeeRecord(const FeeRecord& other)
{
    studentRef = other.studentRef;
    semesterFee = other.semesterFee;
    hostelFee = other.hostelFee;
    libraryFine = other.libraryFine;
    totalPaid = other.totalPaid;
    balance = other.balance;
}

FeeRecord& FeeRecord::operator=(const FeeRecord& other)
{
    if (this == &other)
        return *this;

    studentRef = other.studentRef;
    semesterFee = other.semesterFee;
    hostelFee = other.hostelFee;
    libraryFine = other.libraryFine;
    totalPaid = other.totalPaid;
    balance = other.balance;

    return *this;
}

FeeRecord& FeeRecord::operator-=(double payment)
{
    totalPaid += payment;
    balance -= payment;

    if (balance < 0)
        balance = 0;

    return *this;
}

void FeeRecord::makePayment(double amount)
{
    totalPaid += amount;
    balance -= amount;

    if (balance < 0)
        balance = 0;
}

void FeeRecord::display() const
{
    cout << "\n===== FEE RECORD =====\n";
    cout << "Student: " << studentRef << endl;
    cout << "Semester Fee: " << semesterFee << endl;
    cout << "Hostel Fee: " << hostelFee << endl;
    cout << "Library Fine: " << libraryFine << endl;
    cout << "Total Paid: " << totalPaid << endl;
    cout << "Remaining Balance: " << balance << endl;
}

void FeeRecord::saveToFile(const string& filename) const
{
    ofstream file(filename, ios::app);

    file << studentRef << " "
        << semesterFee << " "
        << hostelFee << " "
        << libraryFine << " "
        << totalPaid << " "
        << balance << "\n";

    file.close();
}

void FeeRecord::loadFromFile(const string& filename)
{
    ifstream file(filename);

    string student;
    double sem, host, fine, paid, bal;

    while (file >> student >> sem >> host >> fine >> paid >> bal)
    {
        cout << "\nLoaded Fee Record:";
        cout << "\nStudent: " << student
            << "\nBalance: " << bal << endl;
    }

    file.close();
}

FeeRecord::~FeeRecord()
{
}