// ConsoleApplication2.cpp : Defines the entry point for the console application.
//


#include "Mystring.h"
#include <string.h>
#include "University.h"
#include "Student.h"
#include "Member.h"
#include "Selection.h"
#include "Teacher.h"
#include "display.h"
#include <iostream>
#include <fstream>

using namespace std;





	int main()
	{

		Mystring a;

		//University U;
		int opt1 = 0;
		int opt2 = 0;
		/*Teacher T("Iqbal", "03034402298", "J3 Johar Town", 3, "UCP", 10, "Lahore", 10, "T1F16BSCS0080", 3, "BSCS", 1, "MSCS");
		T.display();
		*///University U("UCP", 4, "Lahore", 5);
		/*Student S("Ali","L1F16BSCS0060","Aqil",3,4,"BSCS","03034402276","498 J2 Johar Town",5,"UCP",10,"Lahore",10,"FAST");
		S.display();

		Student S1("Zaryab", "L1F16BSCS0061", "Aqil", 3, 4, "BSCS", "03034402276", "498 J2 Johar Town", 5, "UCP", 10, "Lahore", 10, "FAST");
		S1.display();
		Student S2("Ahmad", "L1F16BSCS0062", "Aqil", 3, 4, "BSCS", "03034402276", "498 J2 Johar Town", 5, "UCP", 10, "Lahore", 10, "FAST");
		S2.display();*/
		Student S;
		Teacher T;

		cout << "\t\t\t\t\tWelcome to the University Database System\n\t\t\t\t\t\t    Choose Option\n";
		cout << "1. Add a Record\t\t2.Display a record\t\t3.Update a record\t\t4.Delete a record\n";
		cin >> opt1;
		if (opt1 == 1)
		{

			Select s;
			s.add_data();

		}
		else if (opt1 == 2)
		{
			print d;
		}
		else if (opt1 == 3)
		{

			cout << "Enter Name of Member you want to update: \n";
			Member M;
			char *N;
			N = new char[50]; cin.ignore();
			//cin.getline(N,sizeof(N));
			cin >> N;


			M.update(N);
		}
		//U.display(); 

	}


