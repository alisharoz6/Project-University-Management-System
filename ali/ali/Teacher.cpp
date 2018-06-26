#include "Teacher.h"

#include "Member.h"

#include "Mystring.h"
#include <iostream>
#include <fstream>

using namespace std;


Teacher::Teacher(char* Name_, char* Contact_, char* Address_, int Subjects_, char* Uni, int degree, char* loc, int num_dep, char* Teacher_ID_, int Num_Sec_, char* T_Dep_, char* Qualification_) :Member(Name_, Contact_, Address_, Subjects_, Uni, degree, loc, num_dep)
{
	Mystring a;
	Teacher_ID = new char[a.mystrlen(Teacher_ID_) + 1];
	a.mystrcopy(Teacher_ID_, Teacher_ID);
	Num_Sections = Num_Sec_;
	T_Department = new char[a.mystrlen(T_Dep_) + 1];
	a.mystrcopy(T_Dep_, T_Department);
	Qualification = new char[a.mystrlen(Qualification_) + 1];
	a.mystrcopy(Qualification_, Qualification);
	
	//Sems = new int[num_sems_];
//	a.mystrcopyint(Sems_,Sems);
		
}
void Teacher::set_ID(char* ID)
{
	Mystring a;
	Teacher_ID = new char[a.mystrlen(ID) + 1];
	a.mystrcopy(ID, Teacher_ID);

}
void Teacher::set_Qualification(char* qual)
{
	Mystring a;
	Qualification = new char[a.mystrlen(qual) + 1];
	a.mystrcopy(qual, Qualification);

}
void Teacher::set_T_dep(char* Tdep)
{
	Mystring a;
	T_Department = new char[a.mystrlen(Tdep) + 1];
	a.mystrcopy(Tdep, T_Department);

}
void Teacher::set_num_sec(int sec_)
{
	Num_Sections = sec_;
}

void Teacher::display()
{
	ofstream fout;
	fout.open("Data.txt", ios::app);

	cout << "\nTeacher's ID: " << Teacher_ID << endl;
	Member::display();
	cout << "Number of sections: " << Num_Sections << endl;
	cout << "Qualification: " << Qualification << endl;
	cout << "Department: " << T_Department << endl;

	fout << "\nTeacher's ID: " << Teacher_ID << endl;
	
	fout << "Number of sections: " << Num_Sections << endl;
	fout << "Qualification: " << Qualification << endl;
	fout << "Department: " << T_Department << endl;
}
Teacher::~Teacher()
{
	delete Teacher_ID;
	delete T_Department;
	delete Qualification;

}
