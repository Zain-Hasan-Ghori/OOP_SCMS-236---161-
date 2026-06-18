#include "FinanceManager.h"
#include <iostream>

using namespace std;

FinanceManager::FinanceManager()
{
    count = 0;
    invoiceCount = 0;
}

void FinanceManager::addRecord(const FeeRecord& fr)
{
    if (count < 100)
    {
        records[count] = fr;
        count++;
    }
}

void FinanceManager::payFee(int index, double amount)
{
    if (index >= 0 && index < count)
    {
        records[index] -= amount; 
    }
}

void FinanceManager::showAll() const
{
    for (int i = 0; i < count; i++)
    {
        cout << "\nRecord :" << i << endl;
        records[i].display();
    }
}

void FinanceManager::addInvoice(const Invoice& inv)
{
    if (invoiceCount < 100)
    {
        invoices[invoiceCount] = inv;
        invoiceCount++;
    }
}

void FinanceManager::showInvoices() const
{
    for (int i = 0; i < invoiceCount; i++)
    {
        invoices[i].display();
    }
}