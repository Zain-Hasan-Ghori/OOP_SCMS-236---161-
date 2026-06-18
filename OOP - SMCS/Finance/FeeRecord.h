#ifndef FEERECORD_H
#define FEERECORD_H

#include <string> 

using namespace std;

class FeeRecord
{
private:
    string studentRef;
    double semesterFee;
    double hostelFee;
    double libraryFine;
    double totalPaid;
    double balance;

public:
    FeeRecord();
    FeeRecord(string studentRef, double semesterFee, double hostelFee, double libraryFine);
    FeeRecord(const FeeRecord& other);
    FeeRecord& operator=(const FeeRecord& other);
    FeeRecord& operator-=(double payment);
    void saveToFile(const string& filename) const;
    static void loadFromFile(const string& filename);
    void makePayment(double amount);


    void display() const;

    ~FeeRecord();
};

#endif