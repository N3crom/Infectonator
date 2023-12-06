#ifndef Employee_h
#define Employee_h

#include "GlobalHeader.h"
#include "Company.h"

class Employee : public Company
{
private:	
	int infectionRate;
	int incubationTime;
	int incubationFinishTime = 2;
	int numberOfInfected;
public:
	
	
	void HandleInfection();

	bool CheckIsZombified(int index);
		
	void SetNewZombieficationState();

	int numberGenerator(int max);

	int numberInfected();
};

#endif