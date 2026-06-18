#ifndef HOSTELMANAGER_H
#define HOSTELMANAGER_H

#include "Accommodation.h"
#include "Reportable.h"
#include "HostelBlock.h"

class HostelManager :
	public Accommodation,
	public Reportable
{
private:
	HostelBlock block;
public:
	HostelManager();
	void allocateRoom() override;
	void vacantRoom() override;
	void generateReport() override;
};

#endif