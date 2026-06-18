#ifndef REPORTABLE_H
#define REPORTABLE_H

class Reportable {
public:
	virtual void generateReport() = 0;
	virtual ~Reportable(){}
};
#endif