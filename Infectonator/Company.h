#include "GlobalHeader.h"

class Company
{
public:
	int tourNumber;
	

	enum  ZombificationState {
		Sane = 0,
		Incubating,
		Zombified,
	};
	struct Employees {
		ZombificationState type;
		int iD;
		bool IsInfected;

	};
	Employees employeeList[100]; 

	void MakeEmpolyee();
	
	void GameRun();
	

};

