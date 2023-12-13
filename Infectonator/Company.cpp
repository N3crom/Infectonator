#include "Company.h"


void Company::MakeEmpolyee() {
	

	for (int i = 0; i < 100; i = i + 1) {
		employeeList[i].iD = i;
		employeeList[i].IsInfected = false;
		employeeList[i].state = Sane;
	}
}

void Company::GameRun() 
{
	MakeEmpolyee();
	bool allInfected = false;
	employeeList[0].IsInfected = true;
	employeeList[0].state = Incubating;
	while (true) {
		for (int index = 0; sizeof employeeList; index += 1)
		{
			
			if (employeeList[index].IsInfected == true)
			{
				allInfected = true;
			}
			else {
				allInfected = false;
			}
		}
		}
	
	if (dayNumber == 28 || infectedCount == employees.size()) {
		std::cout << "Game over!" << std::endl;
		break;
	}
	while (dayNumber > 28 || allInfected != true) {
		
		
	}
}