#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice
{
private:
    static int invoiceCounter;
    int invoiceID;
    std::string date;
    std::string items;
    double totalAmount;

public:
    Invoice();
    Invoice(std::string date, std::string items, double totalAmount);

    void display() const;
    static Invoice generateInvoice(std::string date, std::string items, double totalAmount);

    ~Invoice();
};

#endif