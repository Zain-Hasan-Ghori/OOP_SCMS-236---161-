#include "Library.h"
#include <iostream>
using namespace std;

Library::Library() {
	count = 0;
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

Library::~Library() {
	for (int i = 0; i < count; i++) {
		delete items[i];
	}
 }                                                                