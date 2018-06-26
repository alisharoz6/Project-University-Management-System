#include "Member.h"
#include "Student.h"
#include "Mystring.h"
#include "University.h"
#include <iostream>
#include <fstream>

using namespace std;


Member::Member(char* Name_, char* Contact_, char* Address_, int Subjects_,char* Uni, int degree, char* loc, int num_dep) :University(Uni, degree, loc, num_dep)
{
	Mystring a;
	Name = new char[a.mystrlen(Name_) + 1];
	a.mystrcopy(Name_, Name);
	Address = new char[a.mystrlen(Address_) + 1];
	a.mystrcopy(Address_, Address);
	Contact = new char[a.mystrlen(Contact_) + 1];
	a.mystrcopy(Contact_, Contact);
	Subjects = Subjects_;

}
void Member::set_sname(char* Name_)
{
	Mystring a;
	Name = new char[a.mystrlen(Name_) + 1];
	a.mystrcopy(Name_, Name);
}int i = 1;
void Member::set_Contact(char* Contact_)
{
	Mystring a;
	Contact = new char[a.mystrlen(Contact_) + 1];
	a.mystrcopy(Contact_, Contact);
}int j = 0;
void Member::set_Address(char* Address_)
{
	Mystring a;
	Address = new char[a.mystrlen(Address_) + 1];	
	a.mystrcopy(Address_, Address);
}
void Member::set_Subjects(int Subjects_)
{
	Subjects = Subjects_;
}
 void Member::display()
 {
	 ofstream fout;
	 ofstream fout2;
	 ifstream fin;
	fin.open("count.txt", ios::in);
	 
	while (!fin.eof()) {


		fin >> i;
		cout << i + 1;
	}
		//fin >> i;
	fin.close();
//i = j;
	fout << i;
	j = i;
	j++;
	fout2.open("count.txt", ios::out);
	fout.open("Data.txt", ios::app);
	fout2 << j;
	fout2.close();
	cout << "Name: " << Name << endl;
	cout << "Address: " << Address << endl;
	cout << "Contact: " << Contact << endl;
	cout << "Number of Subjects: " << Subjects << endl;
	fout << j;
	fout << "Name: " << Name << endl;
	fout << "Address: " << Address << endl;
	fout << "Contact: " << Contact << endl;
	fout << "Number of Subjects: " << Subjects << endl;
	University::display();
	fin.open("count.txt", ios::in);
	while (fin.eof())
	{
		fout << i++;
	}
}
 void Member::update(char *N)
 {
	 fstream fin;
	 fin.open("Data.txt", ios::in | ios::out | ios::binary);
	 fin.seekg(0);
	 fin.read((char*)this, sizeof(*this));
	 while (!fin.eof())
	 {
		 if (!strcmp(N, Name))
		 {
			 cout << "Enter Name: " << endl;
			 char *n = new char[20];
			 char *a = new char[30];
			 char *c = new char[18];
			 int s;
			 cin >> n;
			 cout << "Enter Address:\n";
			 cin >> a;
			 cout << "Enter Contact: \n";
			 cin >> c;
			 cout << "Enter Number of Subjects: \n";
			 cin >> s;
			 Member::set_sname(n);
			 Member::set_Contact(c);
			 Member::set_Subjects(s);
			 Member::set_Address(a);
			 int l = fin.tellp();
			 fin.seekp(l-sizeof(*this));
			 fin.write((char*)this, sizeof(*this));
		 }
		 fin.read((char*)this, sizeof(*this));


	 }
 }
 void Member::deletes(char *N)
 {

	 char *H = { NULL };
	 fstream fin;
	 fin.open("Data.txt", ios::in | ios::out | ios::binary);
	 fin.seekg(0);
	 fin.read((char*)this, sizeof(*this));
	 while (!fin.eof())
	 {
		 if (!strcmp(N, Name))
		 {
			 int l = fin.tellp();
			 fin.seekp(l - sizeof(*this));

			 fin.write((char*)H, sizeof(*H));
		 }
		 fin.read((char*)H, sizeof(*H));
	 }
 }
Member::~Member()
{
	delete Name;
	delete Address;
}
