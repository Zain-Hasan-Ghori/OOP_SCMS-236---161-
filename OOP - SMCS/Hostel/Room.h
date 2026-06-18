#ifndef ROOM_H
#define ROOM_H
#include <string>

using namespace std;

class Room {
private:
	int roomNumber;
	string type;
	int floor;
	string occupants[3];
	int occupantCount;

public:
	Room();
	Room(int roomNumber, string type, int floor);

	void addOccupant(string name);
	void removeOccupant();
	void display() const;
};

#endif