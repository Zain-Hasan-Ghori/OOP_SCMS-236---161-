#include "LibraryItem.h"

LibraryItem::LibraryItem(
    int itemID,
    std::string title,
    std::string author,
    int publicationYear)
{
    this->itemID = itemID;
    this->title = title;
    this->author = author;
    this->publicationYear = publicationYear;
}

int LibraryItem::getItemID() const
{
    return itemID;
}

std::string LibraryItem::getTitle() const
{
    return title;
}