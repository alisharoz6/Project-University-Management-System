#include"display.h"
#include <iostream>
#include <fstream>
using namespace std;
print::print()
{

	char *b;
	b = new char[1000];

	ifstream fin;
	int i = 0;
	fin.open("Data.txt", ios::in);



	if (fin.is_open())
	{
		while (fin)
		{
			fin.getline(b, fin.peek());
			cout << b << endl;
			i++;
		}
	}
	else
	{
		cout << "File not opened\n";
	}

}