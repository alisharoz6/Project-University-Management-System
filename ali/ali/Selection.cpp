#include "Mystring.h"
#include <string.h>
#include "University.h"
#include "Student.h"
#include "Member.h"
#include "Teacher.h"
#include "Selection.h"
#include <iostream>
#include <fstream>
using namespace std;
void Select::add_data()
{
	Student S;
	Teacher T;
	cout << "\t\t\t\tEnter 1 for Teacher\t\t 2 for Student\n";
	int opt;
	cin >> opt;
	if (opt == 2){
		cout << "Enter Name: ";
		char* name = new char[20];
		char* ID = new char[20];
		char* fname = new char[20];
		float CGPA;
		char* Department = new char[20];
		char* Contact = new char[20];
		char* Address = new char[30];
		int Sub = 0;
		int sem_;
		int num_dep;
		char* Uni_ = new char[20];
		char* loc_ = new char[20];

		char* prev_uni_ = new char[20];

		cin >> name;

		S.set_sname(name);

		cout << "Enter ID: ";
		cin >> ID;
		S.set_ID(ID);

		cout << "Enter Father's Name: ";
		cin >> fname;
		S.set_Fname(fname);
		cout << "Enter Address: ";
		cin >> Address;
		S.set_Address(Address);
		cout << "Enter CGPA: ";
		cin >> CGPA;
		S.set_CGPA(CGPA);
		cout << "Enter Department: ";
		cin >> Department;
		S.set_department(Department);
		cout << "Enter Contact:";
		cin >> Contact;
		S.set_Contact(Contact);
		cout << "Enter Semester: ";
		cin >> sem_;
		S.set_Sem(sem_);
		cout << "Enter Name of university: ";
		cin >> Uni_;
		S.set_uni_name(Uni_);
		cout << "Enter Location of university: ";
		cin >> loc_;
		S.set_location_name(loc_);
		cout << "Enter number of Subjects: ";
		cin >> Sub;
		S.set_Subjects(Sub);
		cout << "Enter Number of Departments: ";
		cin >> num_dep;
		S.set_num_of_departments(num_dep);

		cout << "Previous University: " << endl;
		cin >> prev_uni_;
		S.set_prev_uni(prev_uni_);
		S.display();
	}
	else if (opt == 1)
	{
		char* name = new char[20];
		char* ID = new char[20];
		char* fname = new char[20];
		char* Department = new char[20];
		char* Contact = new char[20];
		char* Address = new char[30];
		int Sub = 0;
		int num_dep;
		char* Uni_ = new char[20];
		char* loc_ = new char[20];

		char* prev_uni_ = new char[20];

		cout << "Enter Name: ";
		cin >> name;

		T.set_sname(name);
		cout << "Enter ID: ";
		cin >> ID;
		T.set_ID(ID);
		cout << "Enter Contact:";
		cin >> Contact;
		T.set_Contact(Contact);
		cout << "Enter Address: ";
		cin >> Address;
		T.set_Address(Address);
		cout << "Enter number of Subjects: ";
		cin >> Sub;
		T.set_Subjects(Sub);
		cout << "Enter Department: ";
		cin >> Department;
		T.set_T_dep(Department);
		cout << "Enter Name of university: ";
		cin >> Uni_;
		T.set_uni_name(Uni_);
		cout << "Enter Location of university: ";
		cin >> loc_;
		T.set_location_name(loc_);
		cout << "Enter Number of Departments: ";
		cin >> num_dep;
		T.set_num_of_departments(num_dep);

		T.display();


	}
	else
	{
		cout << "wrong choice entered\n";
	}
}