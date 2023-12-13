#include "Employee.h"


void Employee::HandleInfection() {

	for (int index = 0; sizeof employeeList; index += 1)
	{

		if (employeeList[index].state == Incubating) {
			employeeList[index].incubationTime += 1;
			if (employeeList[index].incubationTime == 3) {
				SetNewZombieficationState(Zombified);
			}
		}
	}
	
	dayNumber += 1;
}

bool Employee::CheckIsZombified(int index)
{
	
	if (employeeList[index].state == Zombified)
	{
		employeeList[index].IsInfected = true;
		return true;
	}
	else {
		return false;
	}


}




void Employee::SetNewZombieficationState(ZombificationState newState)
{
	state = newState;	
	
}





