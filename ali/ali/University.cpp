#include "University.h"
#include "Mystring.h"
#include "Member.h"
#include <iostream>
#include <fstream>
//#include <fstream>
using namespace std;
/*University::University()
{
	Uni_Name = new char[1];
	//Degree_name = new char[1];
	location = new char[1];
	//department_name = new char[1];
	Uni_Name[1] = '\0';
	//Degree_name[1] = '\0';
	location[1] = '\0';
	//department_name[1] = '\0';
	NumOfDepartments = 0;
}*/
void University::display()
{

	ofstream fout;
	fout.open("Data.txt", ios::app);
	cout << "Name of University: " << Uni_Name << endl;
	cout << "Number of Degrees: " << Degrees << endl;
	cout << "Location of University: " << location << endl;
	cout << "Number of departments: " << NumOfDepartments << endl;
	fout << "Name of University: " << Uni_Name << endl;
	fout << "Number of Degrees: " << Degrees << endl;
	fout << "Location of University: " << location << endl;
	fout << "Number of departments: " << NumOfDepartments << endl;
}
void University::set_uni_name(char* Uni)
{
	Mystring a;
	Uni_Name = new char[a.mystrlen(Uni) + 1];
	a.mystrcopy(Uni, Uni_Name);
}
void University::set_location_name(char* loc)
{
	Mystring a;
	location = new char[a.mystrlen(loc) + 1];
	a.mystrcopy(loc, location);
}
void University::set_num_of_departments(int num)
{
	NumOfDepartments = num;
}
void University::set_degree_name(int degree_)
{
	Degrees = degree_;
}

University::University(char* Uni, int degree, char* loc, int num_dep)
{
	Mystring a;
	Uni_Name = new char[a.mystrlen(Uni)+1];
//	Degree_name = new char[a.mystrlen(degree) + 1];
	location = new char[a.mystrlen(loc) + 1];

	//department_name = new char[a.mystrlen(dep) + 1];
	a.mystrcopy(Uni, Uni_Name);
	Degrees = degree;
	//a.mystrcopy(degree, Degree_name);
		a.mystrcopy(loc, location);
		//a.mystrcopy(dep, department_name);
		NumOfDepartments = num_dep;

}


University::~University()
{
	delete Uni_Name;
	//delete Degree_name;
	//delete location;
	//delete department_name;
}
