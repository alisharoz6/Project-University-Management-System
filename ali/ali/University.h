#pragma once
class University
{
	//char* Degree_name;
	char* Uni_Name;
	int Degrees;
	char* location;
	char* department_name;
	int NumOfDepartments;
	

public:
	
	void set_uni_name(char*);
	void set_degree_name(int);
	void set_location_name(char*);
//	void set_department_name(char*);
	void set_num_of_departments(int);
	char get_uni_name();
	//char get_degree_name();
	char get_location_name();
	//char get_department_name();
	int get_num_of_departments();

	virtual void display();
	University(char* = '\0',int=0, char* = '\0',int = 0);
	~University();
};

