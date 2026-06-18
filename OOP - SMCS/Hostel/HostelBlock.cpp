#include "HostelBlock.h"
#include <iostream>

using namespace std;

HostelBlock::HostelBlock()
{
	blockName = "";
}

HostelBlock::HostelBlock(string blockName) {
	this->blockName = blockName;
}
void HostelBlock::setRoom(int index, Room room) {
	if (index >= 0 && index < 20) {
		rooms[index] = room;
	}
}
void HostelBlock::displayBlock() const {
	cout << "\nBlock: " << blockName << endl; 
}