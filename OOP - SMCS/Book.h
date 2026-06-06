#ifndef BOOK_H
#define BOOK_H

#include "LibraryItem.h"
#include <string>

class Book : public LibraryItem {
private:
	std::string ISBN;
	std::string genre;
	int copiesAvailable;

public:
	Book();
        Book(int itemID, std::string title, std::string author, int publicationYear, std::string ISBN, std::string genre, int copiesAvailable);

	void checkout() override;
	void display() const override;
	~Book();
};

#endif