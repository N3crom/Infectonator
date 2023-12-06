#include "Company.h"


void Company::MakeEmpolyee() {
	

	for (int i = 0; i < 100; i = i + 1) {
		employeeList[i].iD = i;
		employeeList[i].IsInfected = false;
		employeeList[i].type = Sane;
	}
}

void Company::GameRun() 
{
	MakeEmpolyee();
	bool allInfected = false;
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
	employeeList[0].IsInfected = true;
	employeeList[0].type = Incubating;

	while (tourNumber > 28 || allInfected != true) {

	}
}