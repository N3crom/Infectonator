#include "Employee.h"


void Employee::HandleInfection() {

	
	incubationTime++;
	if (incubationTime == 2) {
		SetNewZombieficationState(Incubating);
	}
	else if (incubationTime == 3) {
		SetNewZombieficationState(Zombified);
	}
	dayNumber += 1;
}

bool Employee::CheckIsZombified(int index)
{
	
	if (employeeList[index].state == Zombified)
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


int Employee::numberGenerator(int max)
{
	srand(static_cast<unsigned int>(std::time(nullptr)));
	return (rand() % max);
}


void Employee::SetNewZombieficationState(ZombificationState newState)
{
	state = newState;
	cout << "Tour:" << dayNumber <<"\n In the company we have" << "zombies";
	infectionRate = numberGenerator(numberOfInfected);
}





