#ifndef LIBRARY_H
#define LIBRARY_H
#include "LibraryItem.h"
#include <string>

class Library
{
private:
    LibraryItem* items[100];
    int count;

    struct IssueRecord {
        std::string rollNo = "";
        int itemID = 0;
        std::string issueDate = "";
        std::string returnDate = "";
        bool returned = false;
    };

    IssueRecord issued[100];
    int issuedCount;

    int toIntDate(const std::string& date);

public:
    Library();

    void addItem(LibraryItem* item);
    void displayAll() const;
    void searchByTitle(const std::string& title) const;

    void issueItem(const std::string& rollNo, int itemID);
    void displayIssued() const;

	void saveToFile(const std::string& filename) const;
	void loadFromFile(const std::string& filename);
    void returnItem(int itemID, const std::string& returnDate);
	void deleteItem(int itemID);
    
    ~Library();
};


#endif