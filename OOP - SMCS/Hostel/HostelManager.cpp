#include "HostelManager.h"
#include <iostream>

using namespace std;

HostelManager::HostelManager() :block("Boys Hostel") {
}

void HostelManager::allocateRoom()
{
	cout << "Room Allocated Successfully" << endl;
}
void HostelManager::vacantRoom() {
	cout << "Room Vacated Successfully\n";
}

void HostelManager::generateReport() {
	cout<< "\n===== HOSTEL REPORT =====\n";
	block.displayBlock();
}