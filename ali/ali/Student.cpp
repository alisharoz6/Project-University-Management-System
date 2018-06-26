#include "Student.h"
#include <fstream>
#include "Mystring.h"
#include "Member.h"
#include <fstream>
#include <iostream>
using namespace std;

Student::Student(char* Name_, char* Student_ID_, char* Father_Name_, float CGPA_, int Sem_, char* department_,char* Contact_, char* Address_, int Subjects_, char* Uni, int degree, char* loc, int num_dep, char* Prev_Uni_) : Member(Name_, Contact_, Address_, Subjects_,Uni,degree,loc,num_dep)
{
	Mystring a;
	Student_ID = new char[a.mystrlen(Student_ID_) + 1];
	a.mystrcopy(Student_ID_, Student_ID);
	Father_Name = new char[a.mystrlen(Father_Name_) + 1];
	a.mystrcopy(Father_Name_, Father_Name);
	department = new char[a.mystrlen(department_) + 1];
	a.mystrcopy(department_, department);
	Prev_Uni = new char[a.mystrlen(Prev_Uni_) + 1];
	a.mystrcopy(Prev_Uni_, Prev_Uni);
	CGPA = CGPA_;
	Sem = Sem_;
}
void Student::set_Fname(char* Father_name_)
{
	Mystring a;
	Father_Name = new char[a.mystrlen(Father_name_) + 1];
	a.mystrcopy(Father_name_, Father_Name);

}
void Student::set_CGPA(float CGPA_)
{
	CGPA = CGPA_;
}
void Student::set_Sem(int sem_)
{
	Sem = sem_;
}
void Student::set_department(char* dep_)
{
	Mystring a;
	department = new char[a.mystrlen(dep_) + 1];
	a.mystrcopy(dep_, department);

}
void Student::set_prev_uni(char* Prev_Uni_)
{
	Mystring a;
	Prev_Uni = new char[a.mystrlen(Prev_Uni_) + 1];
	a.mystrcopy(Prev_Uni_, Prev_Uni);

}


void Student::display1()
{

}
void Student::set_ID(char* ID)
{
	Mystring a;
	Student_ID = new char[a.mystrlen(ID) + 1];
	a.mystrcopy(ID, Student_ID);

}
void Student::display()
{
//	while (fin.eof())
	//{
		//fin >> i;
	//}

	Member::display();
	ofstream fout;
	fout.open("Data.txt", ios::app);
	cout << "Student_ID: " << Student_ID << endl;
	cout << "Father's Name: " << Father_Name << endl;
	cout << "Department: " << department << endl;
	//if (Prev_Uni != nullptr || Prev_Uni != "NO" || Prev_Uni != "No" || Prev_Uni != "no")
	//{
	cout << "Previous University: " << Prev_Uni << endl;
	//	}
	cout << "CGPA" << CGPA << endl;
	cout << "Semester: " << Sem << endl;
	
	fout << "Student_ID: " << Student_ID << endl;
	fout << "Father's Name: " << Father_Name << endl;
	fout << "Department: " << department << endl;
	//if (Prev_Uni != nullptr || Prev_Uni != "NO" || Prev_Uni != "No" || Prev_Uni != "no")
	//{
	fout << "Previous University: " << Prev_Uni << endl;
	//	}
	fout << "CGPA" << CGPA << endl;
	fout << "Semester: " << Sem << endl;
	


}
Student::~Student()
{
	

	delete Student_ID;
	delete Father_Name;
	delete department;
	delete Prev_Uni;
}
