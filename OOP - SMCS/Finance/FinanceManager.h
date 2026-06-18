#ifndef FINANCEMANAGER_H
#define FINANCEMANAGER_H

#include "FeeRecord.h"
#include "Invoice.h"


class FinanceManager {
private:
	FeeRecord records[100];
	int count;
	Invoice invoices[100];
	int invoiceCount;
public:
	FinanceManager();
	void addRecord(const FeeRecord& fr);
	void payFee(int index, double amount);
	
	void addInvoice(const Invoice& inv);
	void showInvoices() const;
	void showAll() const;
};

#endif