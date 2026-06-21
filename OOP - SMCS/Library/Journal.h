#ifndef JOURNAL_H
#define JOURNAL_H

#include "LibraryItem.h"
#include <string>

class Journal : public LibraryItem {
private:
	std::string ISSN;
	int volume;
	int issueNumber;

public:
	Journal();

	Journal(int itemID, std::string title, std::string author, int publicationYear, std::string ISSN,
		int volume, int issueNumber);

	void checkout() override;

	void display() const override;

	~Journal();
};

#endif