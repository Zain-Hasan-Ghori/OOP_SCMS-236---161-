#ifndef HOSTELBLOCK_H
#define HOSTELBLOCK_H

#include "Room.h"
#include <string>
using namespace std;

class HostelBlock {
private:
	string blockName;
	Room rooms[20];
public:
	HostelBlock();
	HostelBlock(string blockName);
	void setRoom(int index, Room room);
	void displayBlock() const;
};

#endif