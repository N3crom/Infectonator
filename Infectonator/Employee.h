#pragma once
#include "Company.h"
namespace Infectonator {
	class Employee
	{
	public:
		int ID;
		int tourNumber;

		enum  ZombificationState {
			Sane = 0,
			Incubating,
			Zombified,
		};

		struct Employees {
			ZombificationState type;
			bool IsInfected;
		};
		void HandleInfection() {
			tourNumber += 1;

		}

		bool CheckIsZombified() {
			for (i, sizeof employeeList, i++) {
				if (employeeList[i].type == Zombified)
				{
					return true;
				}
			}
			

		}
		
		void SetNewZombieficationState() {

		}
	};
}
