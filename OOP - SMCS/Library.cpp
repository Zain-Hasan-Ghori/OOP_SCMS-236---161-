#include "Library.h"
#include "Exception.h"
#include <iostream>
#include <fstream>
using namespace std;

Library::Library() {
	count = 0;
	issuedCount = 0;
	for (int i = 0; i < 100; i++) {
		items[i] = nullptr;
	}
} 
void Library::addItem(LibraryItem* item) {
	if (count < 100)
		items[count++] = item;
}

void Library::displayAll() const {
	for (int i = 0; i < count; i++) {
		if (items[i] != nullptr) {
			items[i]->display();
		}
	}
}

void Library::searchByTitle(const string& title) const
{
	for (int i = 0; i < count; i++)
	{
		if (items[i] != nullptr && items[i]->getTitle() == title)
		{
			cout << "FOUND ITEM:" << endl;
			items[i]->display();
			return;
		}
	}

	cout << "Item not found." << endl;
}

void Library::issueItem(const string& rollNo, int itemID)
{
	if (issuedCount >= 100){
		cout << "Issue record full! " << endl;
		return;
	}

	for (int i = 0; i < issuedCount; i++) {
		if (issued[i].itemID == itemID && issued[i].returned == false)
		{
			cout << "Item already issued and not returned!" << endl;
			return;
		}
	}

	bool found = false;

	for (int i = 0; i < count; i++)
	{
		if (items[i] && items[i]->getItemID() == itemID)
		{
			found = true;
			break;
		}
	}

	if (!found)
	{
		cout << "Invalid item ID!" << endl;
		return;
	}

	for (int i = 0; i < count; i++)
	{
		if (items[i] && items[i]->getItemID() == itemID)
		{
			issued[issuedCount].rollNo = rollNo;
			issued[issuedCount].itemID = itemID;

			issued[issuedCount].issueDate = "20260601";
			issued[issuedCount].returnDate = "";
			issued[issuedCount].returned = false;

			issuedCount++;

			cout << "Item issued to " << rollNo << endl;
			return;
		}
	}

}

void Library::displayIssued() const {
	cout << "===== ISSUED ITEMS ======" << endl;

	for (int i = 0; i < issuedCount; i++) {
		cout << "Roll No: " << issued[i].rollNo << "| Item ID: " << issued[i].itemID << endl;
	}
}

void Library::saveToFile(const string& filename) const{
	ofstream file(filename);

	if(!file)
		{
		cerr << "Error opening file for writing!" << endl;
		return;
	}
	for (int i = 0; i < count; i++)
	{ 
		file << items[i]->getItemID() << "," << items[i]->getTitle() << endl;
	}
	file.close();
	cout << "Library data saved to file. "<< endl;
}

void Library::loadFromFile(const string& filename)
{
	ifstream file(filename);

	if (!file)
	{
		cout << "Error opening file for reading!" << endl;
		return;
	}

	int id;
	string title;

	while (file >> id >> title)
	{
		cout << "Loaded Item -> ID: " << id
			<< " Title: " << title << endl;
	}

	file.close();
}

int Library::toIntDate(const std::string& date)
{
	string clean = "";

	for (char c : date)
	{
		if (c != '-')
			clean += c;
	}

	return stoi(clean);
}

void Library::returnItem(int itemID, const std::string& returnDate)
{
	for (int i = 0; i < issuedCount; i++)
	{
		if (issued[i].itemID == itemID && !issued[i].returned)
		{
			issued[i].returnDate = returnDate;
			issued[i].returned = true;

			int issue = toIntDate(issued[i].issueDate);
			int ret = toIntDate(returnDate);

			int daysLate = (ret - issue) - 14;

			if (daysLate > 0)
			{
				double fine = daysLate * 50; 

				throw OverdueException(
					"Book is overdue!",
					fine
				);
			}

			cout << "Returned on time." << endl;
			return;
		}
	}

	cout << "Record not found!" << endl;
}

void Library::deleteItem(int itemID)
{
	for (int i = 0; i < count; i++)
	{
		if (items[i] && items[i]->getItemID() == itemID)
		{
			delete items[i];

			for (int j = i; j < count - 1; j++)
			{
				items[j] = items[j + 1];
			}

			count--;

			cout << "Item deleted successfully.\n";
			return;
		}
	}

	cout << "Item not found!\n";
}

Library::~Library() {
	for (int i = 0; i < count; i++) {
		delete items[i];
	}
 }                                                                