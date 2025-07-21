#pragma once
#include <string>
#include <iostream>
#include "Car.h"
#include "Fiinta.h"
using namespace std;





class Person1 : public Fiinta

{
public:
	std::string nume;
	std::string prenume;


	///Tema 3
	string friend;
	int nrofriends;


	//metode
	void set_balance(double balanta);
	double get_balance();

	void set_age(int varsta);
	int get_age();

	void set_CNP(int nr);
	int get_CNP();

	void set_job(std::string loc_de_munca);
	std::string get_job();

	void set_address(std::string adresa);
	std::string get_address();
	
	/* string functie()const;
	static int nrof();
	*/

	//tema 4

	void hello()const;

	void welcome(const Person1 &obj);

	virtual void picture(int nrpicture);

	virtual void saying();
	//


	virtual void set_studentID(int ID);

	void car_owning();

	virtual ~Person1();


	



	/*Person1();

	/*Person1(std::string kfskfa, double fmfmf);
	Person1(double kfskakaf);
	~Person1(); 


	Person1(string loc, double nr, int pr);
	Person1(double nr);
	Person1(int nr);
	~Person1();
	*/



private:

	//atribute
	double balance, specialbalance;
	int age;
	int CNP;
	std::string job;
	std::string address;
	static int nrofpers;






/// Tema3

protected:
	int familymembers;
	string dadname;
	Car car;
	


};
