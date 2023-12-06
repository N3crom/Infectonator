#include "Employee.h"


void Employee::HandleInfection() {

	
	if (incubationTime < incubationFinishTime)
	{
		incubationTime+1;
		if (incubationTime == incubationFinishTime) {
			incubationTime = 0;
		}
	}
	tourNumber += 1;
}

bool Employee::CheckIsZombified(int index)
{
	
	if (employeeList[index].type == Zombified)
	{
		return employeeList[index].IsInfected = true;
	}


}
int Employee::numberInfected() {
	for (int i = 0; sizeof employeeList; i += 1) {
		if (CheckIsZombified(employeeList[i].iD) == true)
		{
			numberOfInfected += 1;
		}
	}
}


int numberGenerator(int max)
{
	return (rand() % (max + 1));
}


void Employee::SetNewZombieficationState()
{
	cout << "Tour:" <<  tourNumber <<"\n In the company we have" << "zombies";
	infectionRate = numberGenerator(numberOfInfected);
}





