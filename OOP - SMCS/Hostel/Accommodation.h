#ifndef ACCOMMODATION_H
#define ACCOMMODATION_H

class Accommodation {
public:
	virtual void allocateRoom() = 0;
	virtual void vacantRoom() = 0;

	virtual ~Accommodation() {}
};

#endif