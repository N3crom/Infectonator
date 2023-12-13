#ifndef Company_h
#define Company_h
#include "GlobalHeader.h"

class Company
{
public:
	int dayNumber;
	

	enum  ZombificationState {
		Sane,
		Incubating,
		Zombified,
	};
	struct Employees {
		ZombificationState state;
		int iD;
		bool IsInfected;

	};

	ZombificationState state;

	Employees employeeList[100]; 

	void MakeEmpolyee();
	
	void GameRun();
	

};

#endif