#pragma once
class Mystring
{
	char *str;
public:
	Mystring(char *str = nullptr);
	~Mystring();
	int mystrlen(char *str = nullptr);
	Mystring(Mystring &);
	void mystrcopy(char *, char *&);
	Mystring & operator + (Mystring &);
	void set(char *);
	Mystring * operator =(Mystring &);
	void display();
	void mystrcopyint(int* source, int* &destination);
	int mystrlenint(int *str);

};