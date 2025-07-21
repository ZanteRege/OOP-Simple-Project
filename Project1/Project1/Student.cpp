#include "Student.h"
#include "Person1.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Student :: set_studentID(int ID)
{
	studentID = ID;

}
int Student :: get_studentID()
{
	return studentID;

}

void Student::set_car(string masina)
{
	car.set_carname(masina);
}

void Student::car_owning()
{
	cout << "It has a car" << endl;
}

//tema 4

void Student::hello() const
{
	cout << "I am a student." << endl;
}

void Student::welcome(const Person1& obj)
{
	cout << "Welcome people!" << endl;
	obj.hello();
}


void Student::picture(int nrpicture)
{
	cout << "This is a picture of a student." << endl;
}

void Student::saying()
{
	cout << "I am a student, not something else." << endl;
}

Student::~Student()
{
	cout << "Calling Student destructor!" << endl;
}