#include "Book.h"
#include <iostream>
using namespace std;

Book::Book() : LibraryItem(0, "", "", 0) {
	ISBN = "";
	genre = "";
	copiesAvailable = 0;
}

Book::Book(int itemID, string title, string author, int publicationYear, string ISBN, string genre, int copiesAvailable) : LibraryItem(itemID, title, author, publicationYear)
{
	this->ISBN = ISBN;
	this->genre = genre;
	this->copiesAvailable = copiesAvailable; 
}

void Book::checkout() {
	if (copiesAvailable > 0) {
		copiesAvailable--;
		cout << "Checked out: " << getTitle() << endl;
	} else {
		cout << "Sorry, " << getTitle() << " is currently unavailable." << endl;
	}
}

void Book::display() const {
	cout << "==========================" << endl;
	cout << "BOOK INFO" << endl;
	cout << "==========================" << endl;

	cout << "Item ID: " << itemID << endl;
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Publication Year: " << publicationYear << endl;
	cout << "ISBN: " << ISBN << endl;
	cout << "Genre: " << genre << endl;
	cout << "Copies Available: " << copiesAvailable << endl;
}

Book::~Book() {
}