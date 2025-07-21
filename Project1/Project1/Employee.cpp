#include "Employee.h"
#include "Person1.h"
#include "Car.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Employee :: set_employeeID(int ID)
{
	employeeID = ID;
}
int Employee :: get_employeeID()
{
	return employeeID;


}

void Employee :: set_carname(string masina)
{
	car.set_carname(masina);
}
string Employee::get_carname()
{
	return car.get_carname();
}

void Employee::car_owning()
{
	car.car_owning();
	cout << "It has a car." << endl;

}

void Employee::picture(int nrpicture)
{
	cout << "This is a picture of an employee. " << endl;
}

void Employee::saying()
{
	cout << "I am an employee, not something else." << endl;
}