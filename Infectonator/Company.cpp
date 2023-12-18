#include "Company.h"
#include "Employee.h"


void Company::MakeEmpolyee() {
	

	for (int i = 0; i < 100; i++) {
		employeeList[i].iD = i;
		employeeList[i].IsInfected = false;
		employeeList[i].state = Sane;
		employeeList[i].incubationTime = 0;
	}
}

int Company::numberGenerator(int max)
{
	srand(static_cast<unsigned int>(std::time(nullptr)));
	return (rand() % max);
}



void Company::CallHandleInfection() {
	
	Employee employee = Employee();
	employee.HandleInfection();

	Employee* employee2 = new Employee();
	(*employee2).HandleInfection();
	employee2->HandleInfection();
	
}

void Company::GameRun() 
{

	MakeEmpolyee();
	employeeList[0].IsInfected = true;
	employeeList[0].state = Incubating;
	
	cout << "debug1\n";

	for (int day = 1; day <= 28; day++) {
		int zombieCount = 0;
		for (Employee employee : employeeList)
		{
			if (employee.state == Zombified) {
				zombieCount += 1;

				cout << zombieCount;
			}
		}
		cout << zombieCount;
		cout << "debug2\n";
		CallHandleInfection();
		
		cout << "Day " << day << ": Infected employees: " << zombieCount << endl;

		if (day == 28 || zombieCount == sizeof employeeList) {
			std::cout << "Game over!" << std::endl;
			break;
		}
		for (int index = 0; sizeof employeeList; index += 1)
		{

			int randomValue = numberGenerator(100);
			if (randomValue <= zombieCount) {
				employeeList[index].state = Incubating;
			}
			
		}
		
	}
	cout << "debug2\n";
	
}