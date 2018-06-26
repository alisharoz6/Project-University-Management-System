#include "University.h"
#include <fstream>
#pragma once
class Member :public University
{
	char* Name;
	char* Contact;
	char* Address;
	int Subjects;
public:
	void set_sname(char* Name_);
	void update(char*);
	void deletes(char*);
	void set_Contact(char* Contact_);
	void set_Address(char* Address_);
	void set_Subjects(int Subjects_);
	Member(char* = '\0',char* = '\0', char* = '\0', int = 0, char* Uni = '\0', int degree = 0, char* loc = '\0', int num_dep = 0);
	~Member();
	void display();
};

