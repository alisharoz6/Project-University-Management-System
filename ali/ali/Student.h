#include "Member.h"
#pragma once
class Student:public Member
{
	char* Student_ID;
	char* Father_Name;
	float CGPA;
	int Sem;
	char* department;
	char* Prev_Uni;
public:

	Student(char* Name_ = nullptr, char* = nullptr, char* = nullptr, float = 0.0, int = 0, char* = nullptr, char* Contact_ = nullptr, char* Address_ = nullptr, int Subjects_ = 0, char* Uni = nullptr, int degree = 0, char* loc = nullptr, int num_dep = 0, char* prev_uni_ = nullptr);
	~Student();
	void set_Fname(char* Father_name_);
	void set_CGPA(float CGPA_);
	void set_Sem(int Sem_);
	void set_ID(char* ID);
	
	void set_department(char* dep_);
	void set_prev_uni(char* prev_uni_);
	void display();
	void display1();
};

