#pragma once
#include <string>
#include <iostream>
#include "Person1.h"
#include "Car.h"
using namespace std;


	class Employee: public Person1
	{
	public:

		int employeeID;
		string employeepos;

		void set_employeeID(int ID);
		int  get_employeeID();

		void set_carname(string masina);
		string get_carname();

		void car_owning();

		virtual void picture(int nrpicture);
		virtual void saying();


	protected:
		float salary;


};

