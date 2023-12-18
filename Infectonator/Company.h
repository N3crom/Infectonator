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
		int incubationTime;

	};

	ZombificationState state;

	Employees employeeList[100];

	int numberGenerator(int max);

	void MakeEmpolyee();
	
	void GameRun();
	
	void CallHandleInfection();
};

#endif