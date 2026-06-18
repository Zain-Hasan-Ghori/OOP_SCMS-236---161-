#include "Room.h"
#include <iostream>
using namespace std;

Room::Room() {
	roomNumber = 0;
	type = "";
	floor = 0;
	occupantCount = 0;

}

Room::Room(int roomNumber, string type, int floor) {
	this->roomNumber = roomNumber;
	this->type = type;
	this->floor = floor;
	occupantCount = 0;
}

void Room::addOccupant(string name) {
	if (occupantCount < 3)
	{
		occupants[occupantCount] = name;
		occupantCount++;
	}
}

void Room::removeOccupant()
{
	if (occupantCount > 0) {
		occupantCount--;
	}
}
void Room::display() const
{
	cout << "\nRoom Number: " << roomNumber << endl;
	cout << "Type: " << type << endl;
	cout << "Floor: " << floor << endl;
	cout << "Occupants: " << occupantCount << endl;
}