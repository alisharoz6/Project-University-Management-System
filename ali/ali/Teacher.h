#pragma once
#include "Member.h"
class Teacher :public Member
{
	char* Teacher_ID;
	int Num_Sections;
	char* T_Department;
	char* Qualification;

public:
	void set_Qualification(char* qual);
	void set_num_sec(int);
	void set_T_dep(char*);
	void set_ID(char*);
	void display();
	Teacher(char* Name_ = '\0', char* Contact_ = '\0', char* Address_ = '\0', int Subjects_ = 0, char* Uni = '\0', int degree = 0, char* loc = '\0', int num_dep = 0, char* Teacher_ID_='\0', int Num_Sec_=0, char* T_Dep_='\0',char* Qualification_='\0');
	~Teacher();
};

