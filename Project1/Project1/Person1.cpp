#include "Person1.h"
#include "Car.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


void Person1::set_balance(double balance)
{
	this->balance = balance;  ///pointerul this
}
double Person1::get_balance()
{
	return balance;
}

void Person1::set_age(int varsta)
{
	age = varsta;
}
int Person1::get_age()
{
	return age;
}

void Person1::set_CNP(int nr)
{
	CNP = nr;
}
int Person1::get_CNP()
{
	return CNP;
}

void Person1::set_job(std::string loc_de_munca)
{
	job = loc_de_munca;
}
std::string Person1::get_job()
{
	return job;
}

void Person1::set_address(std::string adresa)
{
	address = adresa;
}
std::string Person1::get_address()
{
	return address;
}


/* Person1::Person1(string kfskfa, double balance)
{
	job = kfskfa;
	this->balance = balance;

	cout << "2 parameters." << endl;
}
Person1::Person1(double kfskakaf)
{
	balance = kfskakaf;
	cout << "1 parameter." << endl;

}


Person1::~Person1()
{
	cout << "We delete: " << job << endl;
}
*/

/* Person1::Person1(string loc, double nr, int pr) : job{loc}, balance{nr}, CNP{pr}
{
	cout << "We have 3 par. " << endl;
	nrofpers++;


}
Person1::Person1(double nr) : balance{ nr }
{
	cout << "We have 1 par." << endl;
	nrofpers++;

}

Person1::Person1(int nr) : Person1("Unemployed", 0, nr)
{
	cout << "We have 1 parameter. " << endl;
}

Person1::~Person1()
{
	cout << "We delete: " << job << endl;
	nrofpers--;
	cout << "Persons left: " << nrofpers << endl;

}


/*void nrof(static int nrofpers)
{
	cout << nrofpers << endl;

}

Person1::~Person1()
{
	cout << "We delete: " << job << endl;
	nrofpers--;
}


string Person1::functie()const
{
	return job;
}


int Person1::nrofpers;

int Person1::nrof()
{
	return nrofpers;
}
*/

void Person1 :: set_studentID(int ID)
{
	cout << "ID-ul este " << ID << endl;
}

void Person1::car_owning()
{
	car.car_owning();
	cout << "It has a car" << endl;
}


void Person1 :: hello() const
{
	cout << "I am a person." << endl;
}

void Person1::welcome(const Person1& obj)
{
	cout << "Welcome people!" << endl;
	obj.hello();
	//~Person1();
}

void Person1::picture(int nrpicture)
{
	cout << "This is a picture of a person." << endl;
	//~Person1();
}

void Person1::saying()
{
	cout << "I am a person, not something else! " << endl;

}

Person1::~Person1()
{
	cout << "Calling Person1 destructor!" << endl;
}



