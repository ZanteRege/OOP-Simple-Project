#include <iostream>
#include <conio.h>
#include "Person1.h"
#include "Student.h"
#include "Car.h"
#include "Employee.h"
#include "Staff.h"
using namespace std;

/*class Person {
public:
	string nume;
	string prenume;
private:
	//atribute
	double balance;
	int age;
	int CNP;
	string job;
	string address;

	//metode
	void set_balance(double balanta);
	double get_balance();

	void set_age(int varsta);
	int get_age();

	void set_CNP(int nr);
	int get_CNP();

	void set_job(string loc_de_munca);
	string get_job();

	void set_address(string adresa);
	string get_address();
};
*/



int main()
{ /*
	Person1 Laur;
	Person1 *Andrei = new Person1();

	Laur.set_balance(29.8);
	double bal1 = Laur.get_balance();
	(*Andrei).set_balance(30.1);
	double bal2 = (*Andrei).get_balance();

	Laur.set_age(20);
	int ag1 = Laur.get_age();
	(*Andrei).set_age(29);
	int ag2 = (*Andrei).get_age();

	Laur.set_CNP(123);
	int cn1 = Laur.get_CNP();
	(*Andrei).set_CNP(345);
	int cn2 = (*Andrei).get_CNP();

	Laur.set_job("Gunoier");
	string loc1 = Laur.get_job();
	(*Andrei).set_job("Medic");
	string loc2 = (*Andrei).get_job();

	Laur.set_address("Deva");
	string adr1 = Laur.get_address();
	(*Andrei).set_address("Cluj-Napoca");
	string adr2 = (*Andrei).get_address();

	std::cout << "The balances are: " << bal1 << " and " << bal2 << std::endl;
	std::cout << "The ages are: " << ag1 << " and " << ag2 << std::endl;
	std::cout << "The CNPs are: " << cn1 << " and " << cn2 << std::endl;
	std::cout << "The jobs are: " << loc1 << " and " << loc2 << std::endl;
	std::cout << "The addresses are: " << adr1 << " and " << adr2 << std::endl;
	delete Andrei;
	*/

		/*const Person1 Andrei("Gunoier", 3, 4);
		Person1 Cucu(4);
		cout << Andrei.functie() << endl;
		cout << "The number of persons is: " << Person1::nrof() << endl;
		*/
/**
	Person1 Laur;
	Laur.set_CNP(123);
	int cn1 = Laur.get_CNP();
	cout << "The CNP is: " << cn1 << endl;
	*/
	


	Person1 Laur;
	Student Sergiu;
	Employee Sucea;
	Staff Mihai;

	Laur.set_balance(29.8);
	Sergiu.set_age(20);
	Sucea.set_CNP(12234);
	Mihai.set_address("Cluj Dej");
	Mihai.set_staffpos("Director");






	Employee Darius;
	Darius.set_employeeID(9);

	Sergiu.set_studentID(8);
	Laur.set_studentID(9);


	Darius.set_carname("Ford");
	


	cout << "Balanta este " << Laur.get_balance() << "." << endl;
	cout << "Varsta este " << Sergiu.get_age() << "." << endl;
	cout << "Pozitia membrului din Staff este: " << Mihai.get_staffpos() << "." << endl;
	cout << "CNP-ul angajatului este: " << Sucea.get_CNP() << "." << endl;
	cout << "Adresa membrului staff este: " << Mihai.get_address() << "." << endl;
	cout << "ID-ul membrului Staff care este angajat este: " << Darius.get_employeeID() << "." << endl;
	Darius.get_carname();

	Car thecar;

	thecar.car_owning();
	cout << "\n---------------------------------------------" << endl;

   //Tema 4
	Person1 Stefan;
	Student Stefan2;


	Stefan.hello();
	Stefan2.hello();
	cout << "\n" << endl;

	Person1* Stefanut = new Student();

	Stefan.welcome(Stefan);
	Stefan2.welcome(Stefan2);

	cout << "\nPentru pointer.----" << endl;

	Stefanut->hello();
	delete Stefanut;

	cout << "\n" << endl;

	Person1* Andreiut = new Person1();
	Person1* Ciucas = new Student();
	Person1* OliverTree = new Employee();
	Person1* Gaspar = new Staff();

	Andreiut->picture(1);
	Ciucas->picture(2);
	OliverTree->picture(3);
	Gaspar->picture(4);
	
	cout << "\n-----Begin the process of deletion.----- " << endl;
	cout << "\n" << endl;

	delete Andreiut;
	delete Ciucas;
	delete OliverTree;
	delete Gaspar;


		
	Person1* Sergiu1 = new Person1();
	Person1* Ciuc = new Student();
	Person1* Oliver = new Employee();
	Person1* Maria = new Staff();

	Sergiu1->saying();
	Ciuc->saying();
	Oliver->saying();
	Maria->saying();

	cout << "\n-----Begin the process of deletion.----- " << endl;
	cout << "\n" << endl;

	delete Sergiu1;
	delete Ciuc;
	delete Oliver;
	delete Maria;

	cout << "\n" << endl;
	cout << "Begining the termination!" << endl;
		
		return 0;
}

