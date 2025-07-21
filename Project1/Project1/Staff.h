#pragma once
#include "Employee.h"
#include "Person1.h"
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

class Staff : public Employee
{
public:

	int staffsalary;
	string staffpos;

	void set_staffpos(string pozitie);
	string get_staffpos();

	void set_car1(string masina);

	void car_owning();
	
	virtual void picture(int nrpicture);

	virtual void saying();

};



