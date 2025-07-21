#include "Car.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Car :: set_carname(string masina)
{
	vehiclename = masina;
}
string Car :: get_carname()
{
	return vehiclename;
}

void Car::car_owning()
{
	cout << "It has a car" << endl;
}

