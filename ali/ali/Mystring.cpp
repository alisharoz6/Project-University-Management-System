#include "Mystring.h"
#include <iostream>
using namespace std;
Mystring::Mystring(char *str)
{
	if (str == nullptr) return;
	mystrcopy(str, this->str);
}
void Mystring::set(char *str_)
{
	if (str_ != nullptr)
		delete[]str_;
	mystrcopy(str_, str);
}
void Mystring::mystrcopy(char *source, char *&destination)
{
	int size = mystrlen(source);
	destination= new char[size + 1];
	for (int i = 0; i < size; i++)
		destination[i] = source[i];
	destination[size] = '\0';
}
void Mystring::mystrcopyint(int *source, int *&destination)
{
	int size = mystrlenint(source);
	destination = new int[size];
	for (int i = 0; i < size; i++)
		destination[i] = source[i];
	
}
Mystring::Mystring(Mystring & obj)
{
	mystrcopy(obj.str, this->str);
}
Mystring *Mystring::operator = (Mystring & obj)
{
	mystrcopy(obj.str, this->str);
	return this;
}
int Mystring::mystrlen(char *str)
{
	int i = 0;
	if (str == NULL)
	{
		return 0;
	}
	else
		while (str[i] != NULL)
		{
			i++;
		}
		return i;
}
int Mystring::mystrlenint(int* str)
{
	int i = 0;
	while (str[i] != NULL)
	{
		i++;
	}
	return i;
}

void Mystring::display()
{
	cout << str << endl;
}
Mystring::~Mystring()
{
}