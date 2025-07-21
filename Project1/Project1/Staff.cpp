#include "Staff.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Staff :: set_staffpos(string pozitie)
{
	staffpos = pozitie;
}
string Staff :: get_staffpos()
{
	return staffpos;
}

void Staff :: set_car1(string masina)
{
	car.set_carname(masina);
}


void Staff::car_owning()
{
	cout << "It has a car" << endl;
}

void Staff::picture(int nrpicture)
{
	cout << "A picture of a member of the staff. " << endl;
}
void Staff::saying()
{
	cout << "I am a member of staff, not something else." << endl;
}