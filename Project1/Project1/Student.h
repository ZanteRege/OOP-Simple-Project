#pragma once
#include <string>
#include <iostream>
#include "Person1.h"
using namespace std;

class Student: public Person1
{
public:

	int studentID;
	string studentpos;

	void set_studentID(int ID) override;

	int get_studentID();

	void set_car(string masina);
	string get_car();

	void car_owning();

	void hello() const;

	void welcome(const Person1& obj);

	virtual void picture(int nrpicture);
	virtual void saying();
	virtual ~Student();

};
