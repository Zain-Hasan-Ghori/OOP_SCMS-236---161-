#include "Journal.h"
#include <iostream>
using namespace std;

Journal::Journal() : LibraryItem(0, "", "", 0) {
	ISSN = "";
	volume = 0;
	issueNumber = 0;
}

Journal::Journal(int itemID, string title, string author, int publicationYear, string ISSN, int volume, int issueNumber)
    : LibraryItem(itemID, title, author, publicationYear)


{
	this->ISSN = ISSN;
	this->volume = volume;
	this->issueNumber = issueNumber;
}

void Journal::checkout() {
	cout << "Journals cannot be issued permanently" << endl;
}

void Journal::display() const {
    cout << "==========================" << endl;
    cout << "JOURNAL INFO" << endl;
    cout << "==========================" << endl;

    cout << "Item ID: " << itemID << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publication Year: " << publicationYear << endl;
    cout << "ISSN: " << ISSN << endl;
    cout << "Volume: " << volume << endl;
    cout << "Issue: " << issueNumber << endl;
}

Journal::~Journal() {}