#ifndef Employee_h
#define Employee_h

#include "GlobalHeader.h"
#include "Company.h"

class Employee : public Company
{
private:	
	
	
	int numberOfInfected;
public:
	
	
	void HandleInfection();

	bool CheckIsZombified(int index);
		
	void SetNewZombieficationState(ZombificationState newState);

	

};

#endif