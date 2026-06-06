#ifndef LIBRARY_H
#define LIBRARY_H
#include "LibraryItem.h"
#include <string>

class Library
{
private:
    LibraryItem* items[100];
    int count;

public:
    Library();

    void addItem(LibraryItem* item);
    void displayAll() const;
    void searchByTitle(const std::string& title) const;
    ~Library();
};

#endif