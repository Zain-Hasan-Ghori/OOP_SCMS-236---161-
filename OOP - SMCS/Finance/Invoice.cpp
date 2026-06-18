#include "Invoice.h"
#include <iostream>

int Invoice::invoiceCounter = 0;

Invoice::Invoice()
{
    invoiceID = ++invoiceCounter;
    date = "";
    items = "";
    totalAmount = 0;
}

Invoice::Invoice(std::string date, std::string items, double totalAmount)
{
    invoiceID = ++invoiceCounter;
    this->date = date;
    this->items = items;
    this->totalAmount = totalAmount;
}

void Invoice::display() const
{
    std::cout << "\n===== INVOICE =====\n";
    std::cout << "Invoice ID: " << invoiceID << std::endl;
    std::cout << "Date: " << date << std::endl;
    std::cout << "Items: " << items << std::endl;
    std::cout << "Total Amount: " << totalAmount << std::endl;
}
Invoice Invoice::generateInvoice(std::string date, std::string items, double amount)
{
    return Invoice(date, items, amount);
}

Invoice::~Invoice()
{
}