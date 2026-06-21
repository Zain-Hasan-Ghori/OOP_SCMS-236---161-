#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <string>

class LibraryItem {
protected:
    int itemID;
    std::string title;
    std::string author;
    int publicationYear;

public:
    LibraryItem(int itemID,
        std::string title,
        std::string author,
        int publicationYear);

    virtual void checkout() = 0;
    virtual void display() const = 0;

    int getItemID() const;
    std::string getTitle() const;

    virtual ~LibraryItem() {}
};

#endif